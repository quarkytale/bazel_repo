config_setting(
    name = "use_boringssl",
    define_values = {"postgres:use_boringssl": "True"},
)

cc_binary(
    name = "pg_example",
    srcs = ["main.c"],
    copts = select({
        ":use_boringssl": ["-DUSE_BORINGSSL"],
        "//conditions:default": [],
    }),
)