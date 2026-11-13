add_library(df_bridge_core STATIC bridge_core.cpp generated/interfaces.cpp generated/callbacks.cpp)
target_include_directories(df_bridge_core PUBLIC
  "${CMAKE_CURRENT_SOURCE_DIR}" "${CMAKE_CURRENT_SOURCE_DIR}/generated"
  "${CMAKE_CURRENT_SOURCE_DIR}/../include")
target_link_libraries(df_bridge_core PUBLIC androidrecomp)
target_compile_features(df_bridge_core PUBLIC cxx_std_17)
target_compile_definitions(df_bridge_core PRIVATE NOMINMAX WIN32_LEAN_AND_MEAN
  DF_BRIDGE_USE_NATIVE_HOOK DF_BRIDGE_FAST_NATIVE_CACHE=1 DF_BRIDGE_DIAGNOSTIC_COUNTERS=0)
add_library(df_game_pc_bridge SHARED entry.cpp)
target_link_libraries(df_game_pc_bridge PRIVATE df_bridge_core df_aot_images df_pc_host_shims df_pc_math_imports bcrypt)
target_compile_definitions(df_game_pc_bridge PRIVATE NOMINMAX WIN32_LEAN_AND_MEAN)
if(MSVC)
  target_compile_options(df_bridge_core PRIVATE /O2 /fp:strict)
  target_compile_options(df_game_pc_bridge PRIVATE /O2 /fp:strict)
endif()
set_target_properties(df_game_pc_bridge PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/addons/df_pc_bridge/bin")
foreach(configuration DEBUG RELEASE RELWITHDEBINFO MINSIZEREL)
  set_target_properties(df_game_pc_bridge PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY_${configuration} "${PROJECT_SOURCE_DIR}/addons/df_pc_bridge/bin")
endforeach()
