#ifndef MONEY_H
#define MONEY_H
#include <cstdint>
#include <string>
// defining <budget> namespace for use in app
namespace budget{

class Money{
private:
    // <explicit> prevents implicit conversion of other Number objects into a Money object
    explicit Money(std::int64_t cents) : cents_{cents} {}

    // use <int64_t> to prevent floating-point errors + explicitly allocates 64 bits of memory for cents_
    std::int64_t cents_ = 0;
public:
    // Creates a <Money> object from cents_
    static Money fromCents(std::int64_t cents) {return Money{cents}};

    // cents_ getter
    std::int64_t cents() const {return cents_};

    // Converts cents_ into dollars, and returns a string in the form: [dollar.cents]
    std::string toString() const;

    // Overloaded + operator
    Money operator+(Money other){
        return Money{cents_ + other.cents_};
    }

    // Overloaded - operator
    Money operator-(Money other){
        return Money{cents_ - other.cents_};
    }
};
}

#endif