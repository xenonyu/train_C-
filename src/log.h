#pragma once
#include <iostream>
#include <string>
class Log
{
public:
    enum Level
    {
        LogLevelError = 0,
        LogLevelWarning = 1,
        LogLevelInfo = 2
    };
    static Level m_LogLevel;

public:
    // Log() = delete;
    static void setLevel(Level level)
    {
        m_LogLevel = level;
    }
    template<typename T>
    static void Error(T message)
    {
        if (m_LogLevel >= LogLevelError)
            std::cout << "\n[ERROR]: " << message << std::endl;
    }

    static void Warn(const char *message)
    {
        if (m_LogLevel >= LogLevelWarning)
            std::cout << "\n[WARNING]: " << message << std::endl;
    }
    template<typename T>
    static void Info(T message)
    {
        if (m_LogLevel >= LogLevelInfo)
            std::cout << "\n[INFO]: " << message << std::endl;
    }
};