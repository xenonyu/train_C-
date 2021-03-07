#pragma once

#include <iostream>
#include "Entity.h"
namespace utility
{
    template<typename T>
    T sum(T a, T b) {
        return a + b;
    }

    void Increment(int &value) {
        value++;
    }

}

struct Vertex
{
    float x, y, z;
    Vertex(float x, float y, float z)
            : x(x), y(y), z(z) {

    }
    Vertex(const Vertex& vertex)
            : x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout << "copied." << std::endl;
    }
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vector) {
    return stream << vector.x << ", " << vector.y << ", " << vector.z;
}

// 重载 <<
std::ostream &operator<<(std::ostream &stream, const Entity &other) {
    return stream << other.X << ", " << other.Y;
}

