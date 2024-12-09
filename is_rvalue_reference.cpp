#include <iostream>
#include "bool_constant.hpp"

template <class T>
struct is_rvalue_reference : false_type {};

template <class T>
struct is_rvalue_reference<T&&> : true_type {};


int main() {
    static_assert(!is_rvalue_reference<int>::value);
    static_assert(!is_rvalue_reference<int&>::value);   
    static_assert(is_rvalue_reference<int&&>::value);

    return 0;
}