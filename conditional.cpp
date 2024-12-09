#include <iostream>

template<bool Pred, typename T, typename U>
struct conditional {
    using type = T;
};

template<typename T, typename U>
struct conditional<false, T, U> {
    using type = U;
};

int main() {
    conditional<true, int, double>::type num = 4.5;
    conditional<false, int, double>::type num1 = 4.5;

    std::cout << "num = " <<  num << " num1 = " << num1 << std::endl;

    return 0;
}
