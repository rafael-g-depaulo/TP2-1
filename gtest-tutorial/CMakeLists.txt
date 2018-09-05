cmake_minimum_required(VERSION 2.6)
cmake_minimum_required(VERSION 2.6)

# Localizar biblioteca gtest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Linkar testes com o que queremos testar + (gtest & pthread)
add_executable(runTests tests/runTests.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)