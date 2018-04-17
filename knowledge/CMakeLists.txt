set(CMAKE_CXX_STANDARD 11)
set(related_size_SRCS related_size.cpp)
add_executable(related_size_main ${related_size_SRCS})



set(knowledge_point_SRCS point.cpp)
add_executable(knowledge_point_main ${knowledge_point_SRCS})

set(const_usages_SRCS const_usages.cpp)
add_executable(knowledge_const_usages_main ${const_usages_SRCS})

set(typeid_usages_SRCS typeid_usage.cpp)
add_executable(knowledge_typeid_usage_main ${typeid_usages_SRCS})