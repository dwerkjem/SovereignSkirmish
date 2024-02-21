#include "log.h"

// The main function of the program
int main()
{
    Logger logger;
    logger.log(LogLevel::INFO, "Program is running");
}