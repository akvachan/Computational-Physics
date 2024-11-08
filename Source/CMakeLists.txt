file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
set(SOURCES ${SOURCES} PARENT_SCOPE)  # Export SOURCES variable to the parent scope
