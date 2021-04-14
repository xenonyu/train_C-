//
// Created by XYM on 2021/3/6.
//

#include "Strings.h"

std::ostream &operator<<(std::ostream &stream, const Strings &other) {
    return stream << other.m_Buffer;
}

char &Strings::operator[](unsigned int index) {
    return m_Buffer[index];
}