#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Likeness30/alx-low_level_programming/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD="$PWD/../libtest.so"
