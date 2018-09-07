

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(simle_program_lifetime_SRCS function.h function.c main.c)
add_executable(simle_program_lifetime ${simle_program_lifetime_SRCS})








