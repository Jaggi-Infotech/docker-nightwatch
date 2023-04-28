cc_library(
    name = "git",
    hdrs = ["git.h"],
    srcs = ["git.cc"],
    deps = [
	    "@com_google_absl//absl/log:log",
	    "@com_google_absl//absl/status",
	    "@system_libs//:libgit2",
	    "@system_libs//:libarchive",
    ],
)

cc_binary(
    name = "nightwatch",
    srcs = ["main.cc"],
    deps = [
	    ":git",
	    "@com_google_absl//absl/flags:flag",
	    "@com_google_absl//absl/flags:parse",
	    "@com_google_absl//absl/log:check",
	    "@com_google_absl//absl/log:initialize",
    ],
    linkstatic = 1,
)
