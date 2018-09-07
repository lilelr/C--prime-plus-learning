

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

set(smrtptrs_SRCS smrtptrs.cpp)
add_executable(smrtptrs_main ${smrtptrs_SRCS})

set(unique_SRCS unique.cpp)
add_executable(unique_main ${unique_SRCS})


set(fowlsp_SRCS fowlsp.cpp)
add_executable(fowlsp_main ${fowlsp_SRCS})


set(fowlup_SRCS fowlup.cpp)
add_executable(fowlup_main ${fowlup_SRCS})

set(fowl_SRCS fowl.cpp)
add_executable(fowl_main ${fowl_SRCS})

set(usealgo_SRCS usealgo.cpp)
add_executable(usealgo_main ${usealgo_SRCS})

set(listrmv_SRCS listrmv.cpp)
add_executable(listrmv_main ${listrmv_SRCS})

set(vectlist_SRCS vectlist.cpp)
add_executable(vectlist_main ${vectlist_SRCS})