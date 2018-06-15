//
// Created by Enes Kılıçaslan on 15/06/18.
//

#include "Logger.h"
#include <iomanip>
#include <ctime>

Logger::Logger(const String &fileName) {
    this->logFile.open(fileName, std::fstream::in | std::fstream::out | std::fstream::app);
}

Logger::~Logger() {
    this->logFile.close();
}

void Logger::info(std::string message)  {
    this->logWrite(String("[   INFO  ]"), message);
}

void Logger::warn(std::string message)  {
    this->logWrite(String("[ WARNING ]"), message);
}

void Logger::error(std::string message)  {
    this->logWrite(String("[  ERROR  ]"), message);
}

void Logger::logWrite(String logLevel, String message) {
    time_t sec = time(NULL);
    tm* curTime = localtime(&sec);

    this->logFile << std::setw(11) <<  logLevel <<  " [ "
                  << std::put_time(curTime, "%H:%M %d.%m.%Y")
                  << " ] "  << message << std::endl;
}
