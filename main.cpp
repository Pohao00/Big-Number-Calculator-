#include <boost/lambda/lambda.hpp>
#include "BigNumberCaculator.h"

int main()
{
    BigNumberCaculatorProject::BigNumberCaculator run;
    
    run.addition("999", "499");
    run.subtraction("99", "198");
    run.multiplication("20", "0");
    run.division("100", "59");
    
    return 0;
}