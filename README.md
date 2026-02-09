### ISW421 | C++ Playbook

## Common Commands

Below are the most common commands to build and run this C++ project using CMake and MinGW:

| Command | Description |
| ------- | ----------- |
| `cmake -G "MinGW Makefiles" -S . -B build` | Generate build files for MinGW in the `build` directory (run once or after changing CMakeLists.txt). |
| `cmake --build build` | Build the project (compile sources). Run this after modifying source code. |
| `cmake --build build --clean-first` | Clean and rebuild the project from scratch. |
| `cmake --install build` | Install the built files to the default location (optional, if you set up install rules). |
| `cd build && ctest` | Run tests (if you add tests with CTest). |
| `./build/playbook.exe` | Run the compiled executable (on Windows). |

### Notes
- The first command only needs to be run once, unless you change `CMakeLists.txt` or add/remove source files.
- For a clean build, use the `--clean-first` option.
- If you add tests, you can use `ctest` to run them from the build directory.