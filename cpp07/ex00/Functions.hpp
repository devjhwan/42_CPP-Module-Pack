#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

template <typename T>
class Functions {
public:
    static void swap(T &a, T &b) {
        T tmp = a;
        a = b;
        b = tmp;
    }

    static T min(const T &a, const T &b) {
        return (a < b) ? a : b;
    }

    static T max(const T &a, const T &b) {
        return (a > b) ? a : b;
    }
};

#endif
