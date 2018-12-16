#ifndef _BIG_NUMBER_CACULATOR_
#define _BIG_NUMBER_CACULATOR_
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

#define DEBUG
namespace BigNumberCaculatorProject {
    class BigNumberCaculator
    {
    public:
        void addition(std::string inputData1, std::string inputData2);
        void subtraction(std::string inputData1, std::string inputData2);
        void multiplication(std::string inputData1, std::string inputData2);
        void division(std::string inputData1, std::string inputData2);
    protected:
        
    private:
        void inputProcess(std::vector<int> &number,  std::string inputData);
        bool addition(std::vector<int>::iterator number1_iter, std::vector<int>::iterator number2_iter, std::vector<int> &result);
        bool subtraction(std::vector<int>::iterator number1_iter, std::vector<int>::iterator number2_iter, std::vector<int> &result);
        bool multiplication(std::vector<int>::iterator number1_iter, std::vector<int>::iterator number2_iter, std::vector<int> &result);
        bool division(std::vector<int>::iterator number1_iter, std::vector<int>::iterator number2_iter, std::vector<int> &quotient_num, std::vector<int> &result);
        void compensationZero(std::vector<int>::iterator &number1_iter, std::vector<int>::iterator &number2_iter);
        static std::vector<int> original_num1, original_num2;
        std::vector<int> number1, number2;
        
    };
}
#endif //BIGNUMBERCACULATOR