# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/testlaUI_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/testlaUI_autogen.dir/ParseCache.txt"
  "testlaUI_autogen"
  )
endif()
