# 说明
这是我攒下来的代码，里面提供了Leetcode代码中实用的算法的实用版，即超越做题本身的算法实现，可以更好的应用在生产实践中，希望你喜欢。

代码仓库的名字叫做 zpplib， 全程可以理解为 z cpp lib , z 是我的姓氏的开头一个字母，为了简写，记为 zpplib, 表明这是一个cpp库。  


# 依赖管理
我使用 bazel 来作为包管理工具。关于bazel的说明，参见文章：【TODO】

# 一个实例
进入这个项目目录，运行 ` bazel run //:hello_world `


# 使用本项目

在你的WORKSPACE文件中加入以下内容：
```bazel
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
  name = "com_google_absl",
  urls = ["https://github.com/abseil/abseil-cpp/archive/98eb410c93ad059f9bba1bf43f5bb916fc92a5ea.zip"],
  strip_prefix = "abseil-cpp-98eb410c93ad059f9bba1bf43f5bb916fc92a5ea",
)
```

df07cfd7df8dd9063cf523d0a85cf4d125b92fd4

# 维护
