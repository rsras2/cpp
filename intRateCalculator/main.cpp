//main.cpp
#include "IntRateCalculator.h"
#include <iostream>
// the main function receives parameters passed to the program
int main(int argc, const char * argv[])
{
    if (argc != 3)
    {
        std::cout << "usage: progName <interest rate> <value> " << std::endl;
        return 1;
    }
    double rate = atof(argv[1]);
    double value = atof(argv[2]);
    IntRateCalculator irCalculator(rate);
    double res = irCalculator.singlePeriod(value);
    std::cout << " result is " << res << std::endl;
    return 0;
}