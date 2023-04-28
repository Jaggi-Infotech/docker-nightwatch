load("@rules_foreign_cc//foreign_cc:defs.bzl", "cmake")

cmake(
    name = "libgit2",
    lib_source = "@libgit2//:all_srcs",
    includes = ["include"],
    visibility = ["//visibility:public"],
    out_static_libs = ["libgit2.a"],
    generate_args = [
      "-DBUILD_SHARED_LIBS=OFF",
      "-DUSE_SSH=ON",
    ],
    deps = [
	"@system_libs//:libcrypto",
	"@system_libs//:libpcre",
	"@system_libs//:libssh2",
	"@system_libs//:libssl",
	"@system_libs//:zlib",
    ],
)

