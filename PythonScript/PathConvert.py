import re

def convert_path_to_unreal_asset_path(file_system_path):
    """
    Converts a file system path to an Unreal Engine asset path.

    Args:
    - file_system_path (str): The original file system path to convert.

    Returns:
    - str: The converted Unreal Engine asset path.
    """
    # 正则表达式，用于匹配路径并进行替换
    pattern = re.compile(r'^.*?/Content/')
    # 使用正则表达式替换，并移除尾部的斜杠
    unreal_asset_path = pattern.sub('/Game/', file_system_path).rstrip('/')
    return unreal_asset_path

# 示例路径
path = "E:/Workspace/UEProject/Aura/Content/Characters"
# 调用函数并打印结果
print(convert_path_to_unreal_asset_path(path))