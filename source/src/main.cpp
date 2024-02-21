#include "log.h"


int main()
{
    Logger logger;
    logger.log(LogLevel::INFO, "Program is running");
    return 0;

}