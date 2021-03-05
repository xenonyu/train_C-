//
// Created by XYM on 2021/3/6.
//

#include "String.h"

std::ostream &operator<<(std::ostream &stream, const String &other) {
    return stream << other.m_Buffer;
}

char &String::operator[](unsigned int index) {
    return m_Buffer[index];
}