#include <iostream>
#include "Logger.h"



int main() {
    std::cout << "Hello, World!" << std::endl;

    Logger logger("output.txt");


    logger.info("This is a info");
    logger.error("This is a error");
    logger.warn("This is a warining");


    return 0;
}