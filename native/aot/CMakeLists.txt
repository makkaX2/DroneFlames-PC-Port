cmake_minimum_required(VERSION 3.20)
# Production AOT game logic. Runtime data images are loaded by the bridge.
file(GLOB DF_AOT_GAME_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/game/*.c")
file(GLOB DF_AOT_CXX_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/cxx/*.c")
file(GLOB DF_AOT_NET_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/net/*.c")
add_library(df_aot_images STATIC
  ${DF_AOT_GAME_SOURCES} ${DF_AOT_CXX_SOURCES} ${DF_AOT_NET_SOURCES}
  patched_functions.c dispatch_three.c ../lse/df_lse.cpp)
target_include_directories(df_aot_images PUBLIC include ../runtime ../include ../lse)
target_link_libraries(df_aot_images PUBLIC androidrecomp)
target_compile_features(df_aot_images PRIVATE c_std_11 cxx_std_17)
set_property(TARGET df_aot_images PROPERTY INTERPROCEDURAL_OPTIMIZATION FALSE)
if(MSVC)
  target_compile_options(df_aot_images PRIVATE /O2 /bigobj /fp:strict /UARC_FRAMES /UARC_FN_CENSUS)
else()
  target_compile_options(df_aot_images PRIVATE -O2 -fno-fast-math -UARC_FRAMES -UARC_FN_CENSUS)
endif()
