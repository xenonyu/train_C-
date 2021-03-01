#pragma once
class Log
{
public:
    const static int LogLevelError = 0;
    const static int LogLevelWarning = 1;
    const static int LogLevelInfo = 2;
    static int m_LogLevel;
public:
    static void Warn(const char* message){
        if (m_LogLevel >= LogLevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;
    }

    static void Error(const char* message){
        if (m_LogLevel >= LogLevelError)
            std::cout << "[ERROR]: " << message << std::endl;
    }

    static void Info(const char* message){
        if (m_LogLevel >= LogLevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
};