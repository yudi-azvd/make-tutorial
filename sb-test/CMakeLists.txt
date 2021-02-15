cmake_minimum_required(VERSION 3.0.0)
project(sb-test VERSION 0.1.0)


include_directories(
  include/
  lib/
  lib/doctest
  src/
)

add_executable(sb-test main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
