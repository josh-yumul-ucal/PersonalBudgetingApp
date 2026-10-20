#ifndef MONEY_H
#define MONEY_H
#include <cstdint>
#include <string>
namespace budget{

class Money{
private:
    explicit Money(std::int64_t cents) : cents_{cents} {}
    std::int64_t cents_ = 0;
public:
    static Money fromCents(std::int64_t cents) {return Money{cents}};
};
}

#endif