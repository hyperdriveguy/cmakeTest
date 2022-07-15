add_library(myActionLib SHARED action.c action.h)

add_library(myMessageLib SHARED message.c message.h)

target_include_directories(myActionLib INTERFACE ../include)

target_include_directories(myMessageLib PRIVATE ../include)

target_link_libraries(myActionLib PRIVATE myMessageLib)