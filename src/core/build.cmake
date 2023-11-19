project(firewall)
cmake_minimum_required(VERSION 3.22)

file(GLOB CORE_SRC ${PROJECT_SOURCE_DIR}/src/core/*.cc)

include_directories(./src/core/)

