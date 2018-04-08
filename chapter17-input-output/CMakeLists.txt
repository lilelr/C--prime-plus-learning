

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(write_SRCS write.cpp)
add_executable(write_main ${write_SRCS})


set(defaults_SRCS defaults.cpp)
add_executable(defaults_main ${defaults_SRCS})

set(mainip_SRCS manip.cpp)
add_executable(manip_main ${mainip_SRCS})

set(width_SRCS width.cpp)
add_executable(width_main ${width_SRCS})

set(fill_SRCS fill.cpp)
add_executable(fill_main ${fill_SRCS})

set(setf_SRCS setf.cpp)
add_executable(setf_main ${setf_SRCS})

set(setf2_SRCS setf2.cpp)
add_executable(setf2_main ${setf2_SRCS})

set(iomanip_SRCS iomanip.cpp)
add_executable(iomanip_main ${iomanip_SRCS})

set(cinexcp_SRCS cinexcp.cpp)
add_executable(cinexcp_main ${cinexcp_SRCS})

set(get_fun_SRCS get_fun.cpp)
add_executable(get_fun_main ${get_fun_SRCS})

set(peeker_SRCS peeker.cpp)
add_executable(peeker_main ${peeker_SRCS})

set(append_SRCS append.cpp)
add_executable(append_main ${append_SRCS})

set(binary_SRCS binary.cpp)
add_executable(binary_main ${binary_SRCS})

set(strin_SRCS strin.cpp)
add_executable(strin_main ${strin_SRCS})

set(strout_SRCS strout.cpp)
add_executable(strout_main ${strout_SRCS})










