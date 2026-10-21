#include <budget/Money.h>
// defining budget namespace implementation
namespace budget{
    std::string Money::toString() const{
        // Gets the absolute value of cents_ by checking if negative
        std::int64_t abs = cents_ < 0 ? -cents_:cents_;

        // Separates cents_ into num of dollars and num of cents
        std::int64_t dollars = abs / 100, rem = abs % 100;
        return std::string(cents_ < 0 ? "-$":"$") + std::to_string(dollars) + "." + (rem < 10 ? "0":"") + std::to_string(rem);
    }

    bool Money::operator==(Money other) const{
        return this->cents() == other.cents() ? true:false;
    }

};
