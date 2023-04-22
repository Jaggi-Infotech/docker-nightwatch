load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
  name = "com_google_absl",
  urls = ["https://github.com/abseil/abseil-cpp/archive/b971ac5250ea8de900eae9f95e06548d14cd95fe.zip"],
  strip_prefix = "abseil-cpp-b971ac5250ea8de900eae9f95e06548d14cd95fe",
  sha256 = "f7c2cb2c5accdcbbbd5c0c59f241a988c0b1da2a3b7134b823c0bd613b1a6880",
)

http_archive(
  name = "bazel_skylib",
  urls = ["https://github.com/bazelbuild/bazel-skylib/releases/download/1.2.1/bazel-skylib-1.2.1.tar.gz"],
  sha256 = "f7be3474d42aae265405a592bb7da8e171919d74c16f082a5457840f06054728",
)

http_archive(
  name = "com_google_googletest",
  urls = ["https://github.com/google/googletest/archive/b796f7d44681514f58a683a3a71ff17c94edb0c1.zip"],
  strip_prefix = "googletest-b796f7d44681514f58a683a3a71ff17c94edb0c1",
  sha256 = "983a7f2f4cc2a4d75d94ee06300c46a657291fba965e355d11ab3b6965a7b0e5",
)

http_archive(
    name = "com_github_google_benchmark",
    urls = ["https://github.com/google/benchmark/archive/d572f4777349d43653b21d6c2fc63020ab326db2.zip"],
    strip_prefix = "benchmark-d572f4777349d43653b21d6c2fc63020ab326db2",
    sha256 = "f6f62c4a1fc9b0a2edb70c77cdb9011b605430eabb4dddbb14d60fb492aea7bb",
)

http_archive(
   name = "rules_foreign_cc",
   strip_prefix = "rules_foreign_cc-8d540605805fb69e24c6bf5dc885b0403d74746a",
   url = "https://github.com/bazelbuild/rules_foreign_cc/archive/8d540605805fb69e24c6bf5dc885b0403d74746a.zip",
   sha256 = "727cb0f245f1c08a8ce401f9e5898fea87056cf19ab40fb50b9faf6efc805a7f",
)

load("@rules_foreign_cc//foreign_cc:repositories.bzl", "rules_foreign_cc_dependencies")

# This sets up some common toolchains for building targets. For more details, please see
# https://github.com/bazelbuild/rules_foreign_cc/tree/main/docs#rules_foreign_cc_dependencies
rules_foreign_cc_dependencies()

_ALL_CONTENT = """\
filegroup(
    name = "all_srcs",
    srcs = glob(["**"]),
    visibility = ["//visibility:public"],
)
"""

http_archive(
    name = "libgit2",
    urls = ["https://github.com/libgit2/libgit2/archive/e6325351ceee58cf56f58bdce61b38907805544f.zip"],
    strip_prefix = "libgit2-e6325351ceee58cf56f58bdce61b38907805544f",
    build_file_content = _ALL_CONTENT,
    sha256 = "6750e9edbe3c3182cce05b40fe5fe6c665d75cab71b1f4b08e12a1b170cb2917",
)
