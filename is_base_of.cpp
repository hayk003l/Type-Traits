#include "bool_constant.hpp"
#include <iostream>

template <typename Base, typename Derived>
struct is_base_of{
private:
    static true_type test(const Base*);
    static false_type test(...);

public:
    static constexpr bool value = decltype(test(std::declval<Derived*>()))::value;
};

template <typename Base, typename Derived>
inline constexpr bool is_base_of_v = is_base_of<Base, Derived>::value;


class Base {};

class Derived : public Base {};

class Other {};

int main() {
    Derived obj;

    std::cout << is_base_of_v<Base, Other> << std::endl;
    std::cout << is_base_of_v<Base, Derived> << std::endl;
}