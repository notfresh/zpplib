cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps = [
        ":math",
        "@com_google_absl//absl/strings",
    ]
)

cc_library(
    name = "math",
    hdrs = ["math.h"],
    # 如果这个头文件库依赖于其他库，可以在 deps 中添加
    deps = [],
)

cc_binary(
  name = "hello",
  deps = ["@com_google_absl//absl/strings"],
  srcs = ["hello.cpp"],
)


