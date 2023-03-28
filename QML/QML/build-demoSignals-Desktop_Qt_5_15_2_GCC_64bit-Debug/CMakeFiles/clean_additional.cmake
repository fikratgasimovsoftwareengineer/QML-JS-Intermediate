# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/demoSignals_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/demoSignals_autogen.dir/ParseCache.txt"
  "demoSignals_autogen"
  )
endif()
