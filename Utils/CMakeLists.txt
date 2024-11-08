file(GLOB_RECURSE UTILS "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
set(UTILS ${UTILS} PARENT_SCOPE)  # Export UTILS variable to the parent scope
