// Fill out your copyright notice in the Description page of Project Settings.
#include "DevToolGameplayStatics.h"
#include <cstdint>
#include <algorithm>
#include <Kismet/KismetSystemLibrary.h>
#include <Kismet/KismetMathLibrary.h>

#include "Engine/TextureRenderTarget2D.h"
#include "Rendering/Texture2DResource.h"


bool UDevToolGameplayStatics::IsEditor()
{
#if WITH_EDITOR
	return true;
#else
	return false;
#endif

}

bool UDevToolGameplayStatics::IsLittleEndian()
{
	unsigned int i = 1;
	char *c = (char*)&i;
	return (*c == 1); 
}

float UDevToolGameplayStatics::CalculateActivePixelPercentage(FTexture2DRHIRef TextureRHI, int32 TextureWidth,
	int32 TextureHeight)
{
	uint32 Stride = 0;
	void* TextureData = RHILockTexture2D(TextureRHI, 0, RLM_ReadOnly, Stride, false);
	if (!TextureData) return 0.0f;

	int32 ActivePixels = 0;
	int32 TotalPixels = TextureWidth * TextureHeight;

	for (int32 Y = 0; Y < TextureHeight; ++Y)
	{
		uint8* Row = (uint8*)TextureData + (Y * Stride);
		for (int32 X = 0; X < TextureWidth; ++X)
		{
			FColor* Pixel = (FColor*)(Row + X * 4); // Assuming each pixel is 4 bytes (RGBA)

			if (Pixel->R > 0 || Pixel->G > 0 || Pixel->B > 0) // Check if the pixel is active
			{
				ActivePixels++;
			}
		}
	}

	RHIUnlockTexture2D(TextureRHI, 0, false);

	return TotalPixels > 0 ? static_cast<float>(ActivePixels) / static_cast<float>(TotalPixels) : 0.0f;
}


int32 UDevToolGameplayStatics::BytesToIntegerInRange(const TArray<uint8>& Bytes, int32 BeginIndex, int32 EndIndex,
                                                     bool isDataBigEndian)
{
	// 验证索引的有效性
	if (BeginIndex < 0 || EndIndex >= Bytes.Num() || BeginIndex > EndIndex)
	{
		return 0; // 索引无效
	}

	int32 Result = 0;
	int32 ByteCount = EndIndex - BeginIndex + 1;

	// 如果字节不足4个，则补齐到4个字节
	uint8 TempBytes[4] = {0};
	for (int32 i = 0; i < ByteCount; ++i) {
		TempBytes[i] = Bytes[BeginIndex + i];
	}

	// 检查系统是否为小端序
	bool systemIsLittleEndian = IsLittleEndian();

	// 如果系统和数据的字节顺序不一致，则需要反转字节序
	if (isDataBigEndian != systemIsLittleEndian) {
		std::reverse(TempBytes, TempBytes + ByteCount);
	}

	// 复制到结果
	FMemory::Memcpy(&Result, TempBytes, sizeof(Result));

	return Result;
}

int32 UDevToolGameplayStatics::BytesToIntegerInRangePure(const TArray<uint8>& Bytes, int32 BeginIndex, int32 EndIndex,
	bool isDataBigEndian)
{
	// 验证索引的有效性
	if (BeginIndex < 0 || EndIndex >= Bytes.Num() || BeginIndex > EndIndex)
	{
		return 0; // 索引无效
	}

	int32 Result = 0;
	int32 ByteCount = EndIndex - BeginIndex + 1;

	// 如果字节不足4个，则补齐到4个字节
	uint8 TempBytes[4] = {0};
	for (int32 i = 0; i < ByteCount; ++i) {
		TempBytes[i] = Bytes[BeginIndex + i];
	}

	// 检查系统是否为小端序
	bool systemIsLittleEndian = IsLittleEndian();

	// 如果系统和数据的字节顺序不一致，则需要反转字节序
	if (isDataBigEndian != systemIsLittleEndian) {
		std::reverse(TempBytes, TempBytes + ByteCount);
	}

	// 复制到结果
	FMemory::Memcpy(&Result, TempBytes, sizeof(Result));

	return Result;
}

float UDevToolGameplayStatics::BytesToFloatInRangePure(const TArray<uint8>& Bytes, int32 BeginIndex, int32 EndIndex, bool isDataBigEndian)
{
	// 验证索引的有效性
	if (BeginIndex < 0 || EndIndex >= Bytes.Num() || BeginIndex > EndIndex)
	{
		return 0.0f; // 索引无效
	}

	float Result = 0.0f;
	int32 ByteCount = EndIndex - BeginIndex + 1;

	// 如果字节不足4个，则补齐到4个字节
	uint8 TempBytes[4] = {0};
	for (int32 i = 0; i < ByteCount; ++i) {
		TempBytes[i] = Bytes[BeginIndex + i];
	}

	// 检查系统是否为小端序
	bool systemIsLittleEndian = IsLittleEndian();

	// 如果系统和数据的字节顺序不一致，则需要反转字节序
	if (isDataBigEndian != systemIsLittleEndian) {
		std::reverse(TempBytes, TempBytes + ByteCount);
	}

	// 复制到结果
	FMemory::Memcpy(&Result, TempBytes, sizeof(Result));

	return Result;
}


void UDevToolGameplayStatics::GetClosestPointsBetweenTwoComponents(UPrimitiveComponent* Comp1,
	UPrimitiveComponent* Comp2, FVector& PA, FVector& PB)
{
	float Rad;
	FVector Box;
	UKismetSystemLibrary::GetComponentBounds(Comp1,PB,Box,Rad);

	for (int i=0;i<64;i++)
	{
		FVector outp;
		Comp2->GetClosestPointOnCollision(PB,outp);
		float DIS=UKismetMathLibrary::Vector_Distance(outp,PA);
		if (DIS>1)
		{
			PA=outp;
			Comp1->GetClosestPointOnCollision(PA,PB);
		}
		else
		{
			break;
		}
	
	}
}

void UDevToolGameplayStatics::GetGameDuration(UObject* WorldContextObject, int32&  TotalDurationSeconds,int32& Hours, int32& Minutes,
	int32& Seconds)
{
	// 获取游戏从开始到现在的总秒数。
	TotalDurationSeconds = WorldContextObject->GetWorld()->GetTimeSeconds();
    
	// 计算总时长中包含的完整小时数。
	Hours = TotalDurationSeconds / 3600;
    
	// 计算除去完整小时后，剩余时间中包含的完整分钟数。
	Minutes = static_cast<int32>(TotalDurationSeconds) % 3600 / 60;
    
	// 计算除去完整小时和完整分钟后，剩余的秒数。
	Seconds = static_cast<int32>(TotalDurationSeconds) % 60;
}

float UDevToolGameplayStatics::GetActivePixelPercentageFromRenderTarget2D(UTextureRenderTarget2D* RenderTarget,float threshold)
{
	FTextureRenderTargetResource* RenderTargetResource = RenderTarget->GameThread_GetRenderTargetResource();
	TArray<FColor> OutPixels;
	FReadSurfaceDataFlags ReadSurfaceDataFlags;
	ReadSurfaceDataFlags.SetLinearToGamma(false); // 根据需要设置

	// 从渲染目标读取像素
	if (RenderTargetResource->ReadPixels(OutPixels, ReadSurfaceDataFlags))
	{
		int32 TotalPixels = OutPixels.Num();
		int32 ActivePixels = 0;

		// 遍历像素，计算活跃像素数量
		for (const FColor& Pixel : OutPixels)
		{
			if (Pixel.R > threshold || Pixel.G > threshold || Pixel.B > threshold) // 假设任一颜色通道大于threshold即视为活跃
			{
				ActivePixels++;
			}
		}

		// 计算百分比
		if (TotalPixels > 0)
		{
			return static_cast<float>(ActivePixels) / static_cast<float>(TotalPixels);
		}
	}

	return 0.0f;
}

float UDevToolGameplayStatics::GetActivePixelPercentageFromTexture(UTexture2D* Texture,float threshold)
{
	if (!Texture || !Texture->Resource) return 0.0f;

	FTexture2DResource* TextureResource = (FTexture2DResource*)Texture->Resource;
	FTexture2DRHIRef TextureRHI = TextureResource->GetTexture2DRHI();
	if (!TextureRHI) return 0.0f;

	float ActivePixelPercentage = 0.0f;
	int32 TextureWidth = Texture->GetSizeX();
	int32 TextureHeight = Texture->GetSizeY();

	ENQUEUE_RENDER_COMMAND(CalculateActivePixelPercentageCmd)(
		[TextureRHI, TextureWidth, TextureHeight, &ActivePixelPercentage](FRHICommandListImmediate& RHICmdList)
		{
			ActivePixelPercentage = CalculateActivePixelPercentage(TextureRHI, TextureWidth, TextureHeight);
		});

	// 等待渲染命令执行完成
	FlushRenderingCommands();

	return ActivePixelPercentage;
}

FString UDevToolGameplayStatics::GetMachineID()
{
	return FPlatformMisc::GetLoginId();
}



