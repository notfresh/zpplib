# zpplib开发指南

## 目录
TODO

## fittencode
打开您正在编写的代码文件，输入任意代码即可使用自动补全功能。
  • 按下 tab 接受所有补全建议。

  • 按下 ⌘+⬇️ 接受一行补全建议。

  • 按下 ⌘+➡️ 接受一个单词的补全建议。
  • 按下 ⌥+\ 手动触发补全。

  也可以点击上方图标，体验实用小功能。例如点击上方【聊天图标💬】，即可开始与AI代码助手聊天。
  
## 代码格式化


## 查看cpp版本
clang++ --version

## vscode配置includepath
要在VSCode中配置include path，你需要使用c_cpp_properties.json文件来指定包含路径。首先打开你的项目，然后按照以下步骤操作：

确保安装了C/C++插件，这可以通过在左侧的Extensions视图中搜索"C/C++"来查找并安装。

在你的项目中创建一个名为".vscode"的文件夹（如果还没有的话）。

在".vscode"文件夹中创建一个名为"c_cpp_properties.json"的文件，如果已存在，则打开该文件。

在"c_cpp_properties.json"文件中，添加或修改"configurations"部分来包含你的项目的包含路径。例如：

{
  "configurations": [
    {
      "name": "Mac",
      "includePath": [
        "${workspaceFolder}/**",
        "/usr/local/include"
      ],
      "defines": [],
      "macFrameworkPath": [
        "/System/Library/Frameworks",
        "/Library/Frameworks"
      ],
      "compilerPath": "/usr/bin/clang",
      "cStandard": "c17",
      "cppStandard": "c++17",
      "intelliSenseMode": "macos-gcc-x64"
    },
    {
      "name": "Linux",
      "includePath": [
        "${workspaceFolder}/**",
        "/usr/include"
      ],
      "defines": [],
      "compilerPath": "/usr/bin/gcc",
      "cStandard": "c11",
      "cppStandard": "c++17",
      "intelliSenseMode": "gcc-x64"
    }
  ],
  "version": 4
}
在上面的示例中，你可以指定不同操作系统环境下的包含路径，为你的项目添加对应的配置。

保存"c_cpp_properties.json"文件，并重新加载VSCode窗口。
现在你的项目应该能够识别并使用你指定的包含路径了。

## bazel的include路径配置
bazel-项目名称/external/com_google_absl/absl/strings/str_join.h
