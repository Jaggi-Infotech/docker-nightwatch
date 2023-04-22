load("@rules_foreign_cc//foreign_cc:defs.bzl", "cmake")

cmake(
    name = "libgit2",
    lib_source = "@libgit2//:all_srcs",
    includes = ["include"],
    visibility = ["//visibility:public"],
    out_static_libs = ["libgit2.a"],
    generate_args = ["-DBUILD_SHARED_LIBS=OFF"]
)
