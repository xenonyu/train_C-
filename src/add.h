#pragma once

#include <iostream>
#include "Entity.h"

template<typename T>
T sum(T a, T b) {
    return a + b;
}

void Increment(int &value) {
    value++;
}

// 重载 <<
std::ostream &operator<<(std::ostream &stream, const Entity &other) {
    return stream << other.X << ", " << other.Y;
}
