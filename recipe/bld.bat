@echo off

rmdir /s /q build
mkdir build
cd build

cmake .. ^
    -G Ninja ^
    -DCMAKE_INSTALL_PREFIX=%PREFIX% ^
    -DCMAKE_PREFIX_PATH=%PREFIX% ^
    -DCMAKE_BUILD_TYPE=Release

ninja install

ctest --output-on-failure