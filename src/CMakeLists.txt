
list(APPEND LIB_SRCS Greeting.h)
list(APPEND LIB_SRCS Greeting.cpp)

add_library(greeting ${LIB_SRCS})

set_target_properties(greeting PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../lib)

