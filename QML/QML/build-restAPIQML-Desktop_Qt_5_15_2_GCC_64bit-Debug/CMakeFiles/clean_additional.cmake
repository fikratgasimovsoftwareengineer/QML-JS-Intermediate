# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/restAPIQML_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/restAPIQML_autogen.dir/ParseCache.txt"
  "restAPIQML_autogen"
  )
endif()
