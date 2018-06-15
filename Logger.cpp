//
// Created by Enes Kılıçaslan on 15/06/18.
//

#include "Logger.h"
#include <iomanip>

Logger::Logger(const String &fileName) {



    this->logFile.open(fileName, std::fstream::in | std::fstream::out | std::fstream::app);

}

Logger::~Logger() {
    this->logFile.close();
}

void Logger::logWrite(String logLevel, String message) {

    this->logFile << std::setw(11) <<  logLevel << "  " << message << std::endl;
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

