# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/quickWidgetsQmlDemo_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/quickWidgetsQmlDemo_autogen.dir/ParseCache.txt"
  "quickWidgetsQmlDemo_autogen"
  )
endif()
