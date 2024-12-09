#pragma once


template<typename Type, Type v>
struct integral_constant {
    static constexpr Type value = v;
};