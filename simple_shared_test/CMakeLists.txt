add_executable(exec exec.cpp)
add_library(lib SHARED lib.cpp)

target_link_libraries(exec PUBLIC lib kangaru)
target_link_libraries(lib PUBLIC kangaru)
