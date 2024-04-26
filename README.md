# vcpkg-example-project
An example project, using custom vcpkg git registry and example port.

```shell
# vcpkg new application
vcpkg new --application

# add git registry, edit vcpkg-configuration.json

# add ports to project
vcpkg add port port-example
vcpkg add port spdlog

# add CMakePresets.json

# cmake configuration
cmake --preset=default

# cmake build
cmake --build vcpkg-build
```