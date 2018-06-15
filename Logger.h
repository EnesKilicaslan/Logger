//
// Created by Enes Kılıçaslan on 15/06/18.
//

#ifndef LOGGER_LOGGER_H
#define LOGGER_LOGGER_H

#include <iostream>
#include <fstream>
#include <string>

using String = std::string;


class Logger {

public:
    Logger(const String &fileName);
    virtual ~Logger();

    void info(std::string message);
    void warn(std::string message);
    void error(std::string message);


private:
    std::ofstream  logFile;

    void logWrite(String logLevel, String message);

};


#endif //LOGGER_LOGGER_H
