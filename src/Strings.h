//
// Created by XYM on 2021/3/6.
//

#ifndef TRAIN_C_STRINGS_H
#define TRAIN_C_STRINGS_H
#include <iostream>
class Strings {
private:
    char *m_Buffer;
    unsigned int m_Size;
public:
    explicit Strings(const char *string) {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, string, m_Size);
        m_Buffer[m_Size] = 0;
    }

    Strings(const Strings &other)
            : m_Size(other.m_Size) {
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
    }

    ~Strings() {
        delete[] m_Buffer;
    }
    void Print(){
        std::cout << m_Buffer << std::endl;
    }

    char &operator[](unsigned int index);

    friend std::ostream &operator<<(std::ostream &stream, const Strings &other);
};

#endif //TRAIN_C_STRINGS_H
