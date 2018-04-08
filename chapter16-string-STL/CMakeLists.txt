

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)




set(str1_SRCS str1.cpp)
add_executable(str1_main ${str1_SRCS})

set(strfile_SRCS strfile.cpp)
add_executable(strfile_main ${strfile_SRCS})


set(vect3_SRCS vect3.cpp)
add_executable(vect3_main ${vect3_SRCS})

set(vect1_SRCS vect1.cpp)
add_executable(vect1_main ${vect1_SRCS})

set(vect2_SRCS vect2.cpp)
add_executable(vect2_main ${vect2_SRCS})

set(list_SRCS list.cpp)
add_executable(list_main ${list_SRCS})

set(multmap_SRCS multmap.cpp)
add_executable(multmap_main ${multmap_SRCS})

set(set_SRCS setops.cpp)
add_executable(set_main ${set_SRCS})


set(strngstl_SRCS strngstl.cpp)
add_executable(strngstl_main ${strngstl_SRCS})

set(ilist_SRCS ilist.cpp)
add_executable(ilist_main ${ilist_SRCS})