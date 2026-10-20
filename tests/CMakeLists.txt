# Lines 2-8 download Catch2
include(FetchContent)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG        v3.5.2
)
FetchContent_MakeAvailable(Catch2)

# Creates test executable
add_executable(core_tests test_money.cpp) # Similar to "g++ test_money.cpp -o core_tests.exe"

# Links budget_core and Catch2 libraries to core_tests.exe [budget_core is defined in that CMakeLists.txt in core folder]
target_link_libraries(core_tests PRIVATE budget_core Catch2::Catch2WithMain)

# Integrate Catch2 with CTest

# List of directories for CMake to search through: Catch2 directory
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)

# loads Catch.cmake
include(Catch)

# CMake automatically searches for Catch2 tests in core_tests.cpp
catch_discover_tests(core_tests)