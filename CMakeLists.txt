cmake_minimum_required(VERSION 3.20)
project(CAL)

include(${CMAKE_CURRENT_LIST_DIR}/src/openssl/build.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/src/core/build.cmake)

set(SRC
	${CORE_SRC}
	${OPENSSL_SRC})

add_library(CAL ${SRC})

