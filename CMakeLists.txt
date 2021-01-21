cmake_minimum_required(VERSION 3.17)
project(C_Project C)

set(CMAKE_C_STANDARD 99)

# add_executable(C_Project main.c)

file (GLOB_RECURSE files *.c)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.c\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()