

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)




set(tv_SRCS tv.cpp tv.h use_tv.cpp)
add_executable(tv_main ${tv_SRCS})

set(nested_SRCS queuetp.h queuetp.cpp nested.cpp)
add_executable(nested_class_main ${nested_SRCS})

set(rtti1_SRCS rtti1.cpp)
add_executable(rtti1_main ${rtti1_SRCS})

set(rtti2_SRCS rtti2.cpp)
add_executable(rtti2_main ${rtti2_SRCS})

set(constcast_SRCS constcast.cpp)
add_executable(constcast_main ${constcast_SRCS})