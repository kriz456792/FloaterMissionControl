# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\FloaterMissionControl_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\FloaterMissionControl_autogen.dir\\ParseCache.txt"
  "FloaterMissionControl_autogen"
  )
endif()
