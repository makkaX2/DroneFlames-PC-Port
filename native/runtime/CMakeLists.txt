add_library(androidrecomp STATIC
  elf_image.cpp arm64_runtime.c shim.cpp shim_pthread.cpp shim_math.cpp
  shim_posix.cpp shim_gl.cpp shim_asset.cpp shim_file.cpp shim_sys.cpp
  shim_zlib.cpp shim_varargs.cpp window.cpp jni_env.cpp)
target_include_directories(androidrecomp PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_compile_features(androidrecomp PUBLIC cxx_std_17)
target_compile_definitions(androidrecomp PRIVATE NOMINMAX WIN32_LEAN_AND_MEAN _CRT_SECURE_NO_WARNINGS)
target_link_libraries(androidrecomp PUBLIC ws2_32 dbghelp)
if(MSVC)
  target_compile_options(androidrecomp PRIVATE /O2 /fp:strict /UARC_FRAMES /UARC_FN_CENSUS)
endif()
