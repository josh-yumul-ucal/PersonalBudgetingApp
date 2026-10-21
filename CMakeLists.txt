cmake_minimum_required(VERSION 3.21)
project(BudgetApp VERSION 0.1 LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # Tells CMake to create a .json file containing compilation commands

option(BUDGET_BUILD_APP "Build the Qt GUI" ON)

add_subdirectory(core)

enable_testing()
add_subdirectory(tests)
