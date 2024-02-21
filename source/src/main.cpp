#include "log.h"
#include <iostream>
int main()
{
    Logger logger;

    logger.log(LogLevel::INFO, "Program Started");
    return 0;
}