load("@rules_foreign_cc//foreign_cc:defs.bzl", "cmake")

cmake(
    name = "libgit2",
    lib_source = "@libgit2//:all_srcs",
    includes = ["include"],
    visibility = ["//visibility:public"],
    out_static_libs = ["libgit2.a"],
    generate_args = ["-DBUILD_SHARED_LIBS=OFF"],
    # Instead of doing this, it might be possible to add a dep on new_local_repository.
    # Refer: https://www.stevenengelhardt.com/2021/09/22/practical-bazel-depending-on-a-system-provided-c-cpp-library/
    linkopts = ["-lssl -lcrypto -lpcre -lz"],
)
