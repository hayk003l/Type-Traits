#include "remove_reference.hpp"

template <typename T>
T&& forward(remove_reference<T>::type& param) {
    return static_cast<T&&>(param);
};

template <typename T>
T&& forward(remove_reference<T>::type&& param) {
    return static_cast<T&&>(param);
};