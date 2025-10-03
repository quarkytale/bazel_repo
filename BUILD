config_setting(
    name = "use_boringssl",
    define_values = {"postgres:use_boringssl": "True"},
)

cc_binary(
    name = "pg_example",
    srcs = ["main.c"],
    copts = select({
        ":use_boringssl": ["-DUSE_BORINGSSL"],
        "//conditions:default": ["-I/usr/include"],
    }),
    deps = select({
        ":use_boringssl": ["@boringssl//:ssl"],
        "//conditions:default": [],
    }),
    linkopts = select({
        ":use_boringssl": [],
        "//conditions:default": ["-lssl", "-lcrypto"],
    }),
)