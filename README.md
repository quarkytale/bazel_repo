# bazel_repo

### Install
```
curl -Lo bazelisk-linux-amd64 https://github.com/bazelbuild/bazelisk/releases/latest/download/bazelisk-linux-amd64 && chmod +x bazelisk-linux-amd64 && sudo mv bazelisk-linux-amd64 /usr/local/bin/bazel
```

### Build
```
bazel build //:pg_example
```

### Test
Update the `use_boringssl` in the BUILD file and try
```
./bazel-bin/pg_example
```