add_library(budget_core
src/Money.cpp)

target_include_directories(budget_core PUBLIC include)
target_compile_definitions(budget_core PUBLIC cxx_std_20)