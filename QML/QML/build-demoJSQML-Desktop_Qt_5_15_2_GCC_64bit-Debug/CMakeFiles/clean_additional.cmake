# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/demoJSQML_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/demoJSQML_autogen.dir/ParseCache.txt"
  "demoJSQML_autogen"
  )
endif()
