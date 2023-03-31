# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/contextProperty_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/contextProperty_autogen.dir/ParseCache.txt"
  "contextProperty_autogen"
  )
endif()
