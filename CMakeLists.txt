cmake_minimum_required(VERSION 3.24)
project(DroneFlames0408 VERSION 0.40.8 LANGUAGES C CXX)

if(NOT WIN32 OR NOT MSVC OR NOT CMAKE_SIZEOF_VOID_P EQUAL 8)
  message(FATAL_ERROR "This port currently requires Windows x64 and MSVC 2022.")
endif()
if(DEFINED MSVC_C_ARCHITECTURE_ID AND NOT MSVC_C_ARCHITECTURE_ID STREQUAL "x64")
  message(FATAL_ERROR "Select the x64 compiler, not ARM64 or Win32.")
endif()

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_MSVC_RUNTIME_LIBRARY MultiThreadedDLL)
if(CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_CONFIGURATION_TYPES Release CACHE STRING "Supported build configuration" FORCE)
elseif(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Build configuration" FORCE)
endif()
if(NOT CMAKE_CONFIGURATION_TYPES AND NOT CMAKE_BUILD_TYPE STREQUAL "Release")
  message(FATAL_ERROR "Use Release: the generated game code requires optimization for practical performance.")
endif()

add_compile_definitions(NOMINMAX WIN32_LEAN_AND_MEAN _CRT_SECURE_NO_WARNINGS)
add_compile_options(/fp:strict /bigobj)
set(ARC_FRAMES OFF CACHE BOOL "Production frame tracing" FORCE)
set(DF_MATH_DIAGNOSTIC_COUNTERS OFF CACHE BOOL "Production math counters" FORCE)

add_subdirectory(native/runtime)
add_subdirectory(native/aot)
add_subdirectory(native/host_shims)
add_subdirectory(native/math_imports)
add_subdirectory(native/bridge)

set(DF_GAME_BINARY_DIR "${CMAKE_CURRENT_SOURCE_DIR}/addons/df_pc_bridge/bin")
set_target_properties(df_game_pc_bridge PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY "${DF_GAME_BINARY_DIR}"
  RUNTIME_OUTPUT_DIRECTORY_RELEASE "${DF_GAME_BINARY_DIR}"
)
