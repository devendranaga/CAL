project(firewall)
cmake_minimum_required(VERSION 3.22)

file(GLOB OPENSSL_SRC ${PROJECT_SOURCE_DIR}/src/openssl/*.cc)

include_directories(./src/openssl/)

