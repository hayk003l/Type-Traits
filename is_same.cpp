#include "bool_constant.hpp"
#include <iostream>

template<typename T, typename U>
struct is_same : false_type {};

template<typename T>
struct is_same<T, T> : true_type {};

template <typename T, typename U>
inline constexpr bool is_same_v = is_same<T, U>::value;

int main() {
    static_assert(is_same<int, int>::value);
    static_assert(!is_same<double, int>::value);

    static_assert(is_same_v<int, int>);
    static_assert(!is_same_v<double, int>);

    return 0;
}