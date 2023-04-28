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

# System Libs
new_local_repository(
    name = "system_libs",
    path = "/usr",
    build_file = "//third_party:system_libs.BUILD",
)
