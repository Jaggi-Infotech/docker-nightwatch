cc_library(
    name = "git",
    hdrs = ["git.h"],
    srcs = ["git.cc"],
    deps = [
	    "//third_party:libgit2",
	    "@com_google_absl//absl/log:log",
	    "@com_google_absl//absl/status",
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
