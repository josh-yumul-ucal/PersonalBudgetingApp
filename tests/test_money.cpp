#include <catch2/catch_test_macros.hpp>
#include <budget/Money.h>

TEST_CASE("Money addition is exact"){
    REQUIRE(budget::Money::fromCents(10) + budget::Money::fromCents(20) == budget::Money::fromCents(30));
}

TEST_CASE("Money toString() function properly formats negative values"){
    REQUIRE(budget::Money::fromCents(-505).toString() == "-$5.05");
}