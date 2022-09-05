#!/bin/bash
wget https://github.com/MubarekSD/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD=/tmp/libmask.so
