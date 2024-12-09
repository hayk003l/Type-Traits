
template <bool B, typename T = void>
struct enable_if {};

template <typename T>
struct enable_if<true, T> {
    typedef T type;
};


template <bool B, typename T = void>
using enable_if_t = typename enable_if<B, T>::type;


int main() {
    enable_if<true, int>::type num;
    enable_if<false, int>::type num1; // error
}