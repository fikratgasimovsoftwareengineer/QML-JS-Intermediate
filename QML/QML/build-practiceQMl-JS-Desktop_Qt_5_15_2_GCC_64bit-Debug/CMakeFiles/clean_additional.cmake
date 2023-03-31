# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/practiceQMl-JS_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/practiceQMl-JS_autogen.dir/ParseCache.txt"
  "practiceQMl-JS_autogen"
  )
endif()
