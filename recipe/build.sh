#!/bin/bash

rm -rf build
mkdir -p build
cd build

cmake .. \
    -G Ninja \
    -DCMAKE_INSTALL_PREFIX=$PREFIX \
    -DCMAKE_PREFIX_PATH=$PREFIX \
    -DCMAKE_BUILD_TYPE=Release

ninja install

ctest --output-on-failure