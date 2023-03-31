# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qmlContextProperty_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qmlContextProperty_autogen.dir/ParseCache.txt"
  "qmlContextProperty_autogen"
  )
endif()
