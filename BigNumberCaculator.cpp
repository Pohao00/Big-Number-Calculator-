#include "BigNumberCaculator.h"
#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include <iostream>

#define DEBUG
std::vector<int> BigNumberCaculatorProject::BigNumberCaculator::original_num1(0, 0);
std::vector<int> BigNumberCaculatorProject::BigNumberCaculator::original_num2(0, 0);

void BigNumberCaculatorProject::BigNumberCaculator::inputProcess(std::vector<int> &number, std::string inputData) {
    std::string::iterator inputData_iter = inputData.end();
    number.clear();
    for (--inputData_iter; inputData_iter >= inputData.begin(); inputData_iter--) {
            number.push_back(boost::lexical_cast<int>(*inputData_iter));
    }
}

void BigNumberCaculatorProject::BigNumberCaculator::addition(std::string inputData1, std::string inputData2)
{
    std::vector<int> result;
    inputProcess(number1, inputData1);
    inputProcess(number2, inputData2);
    
    original_num1 = number1;
    original_num2 = number2;
        
    std::vector<int>::iterator number1_iter;
    std::vector<int>::iterator number2_iter;
    
    compensationZero(number1_iter, number2_iter);
    
    addition(number1_iter, number2_iter, result);
    
#ifdef DEBUG
std::cout << "Addition Result: ";
for (int i = result.size()-1; i >= 0; i--) {
    std::cout << result[i];
}
    std::cout << std::endl;
#endif    
}

void BigNumberCaculatorProject::BigNumberCaculator::compensationZero(std::vector<int>::iterator &number1_iter, std::vector<int>::iterator &number2_iter) {
    if (number1.size() < number2.size())
        number1.resize(number2.size(), 0);
    else if (number1.size() > number2.size())
        number2.resize(number1.size(), 0);
        
    number1_iter = number1.begin();
    number2_iter = number2.begin();
}

bool BigNumberCaculatorProject::BigNumberCaculator::addition(std::vector<int>::iterator number1_iter, std::vector<int>::iterator number2_iter, std::vector<int> &result) {
    int carry_over = 0;
    
    while (1) {
        if (*number1_iter + *number2_iter + carry_over > 9) {
            result.push_back(*number1_iter + *number2_iter + carry_over - 10);
            carry_over = 1;
        }
        else {
            result.push_back(*number1_iter + *number2_iter + carry_over);
            carry_over = 0;
        }
        number1_iter++;
        number2_iter++;
        if (number1_iter == number1.end() || number2_iter == number2.end())
            break;
    }
    if (carry_over != 0)
        result.push_back(carry_over);
    
    return true;
}

void BigNumberCaculatorProject::BigNumberCaculator::subtraction(std::string inputData1, std::string inputData2) {
    std::vector<int> result;
    
    inputProcess(number1, inputData1);
    inputProcess(number2, inputData2);
    original_num1 = number1;
    original_num2 = number2;

    std::vector<int>::iterator number1_iter;
    std::vector<int>::iterator number2_iter;
    
    compensationZero(number1_iter, number2_iter);
    
    if (!subtraction(number1_iter, number2_iter, result)) {
        result.clear();
        swap(number1, number2);
        subtraction(number2_iter, number1_iter, result);
        
    while (*(result.end() - 1) == 0)
        result.pop_back();
    *(result.end() - 1) = *(result.end() - 1) * (-1);
    }
        
#ifdef DEBUG
std::cout << "Subtraction Result: ";
for (int i = result.size()-1; i >= 0; i--) {
    std::cout << result[i];
}
    std::cout << std::endl;
#endif  
}

bool BigNumberCaculatorProject::BigNumberCaculator::subtraction(std::vector<int>::iterator number1_iter, std::vector<int>::iterator number2_iter, std::vector<int> &result) {
    int borrow_bit = 0;
    while (1) {
        if (*number1_iter - *number2_iter + borrow_bit < 0) {
            result.push_back(*number1_iter - *number2_iter + borrow_bit + 10);
            borrow_bit = -1;
        }
        else {
            result.push_back(*number1_iter - *number2_iter + borrow_bit);
            borrow_bit = 0;
        }
        number1_iter++;
        number2_iter++;
        if (number1_iter == number1.end() || number2_iter == number2.end())
            break;
    }
    if (borrow_bit != 0) {
        return false;
    }
    return true;
}

void BigNumberCaculatorProject::BigNumberCaculator::multiplication(std::string inputData1, std::string inputData2) {
    std::vector<int> result;
    
    inputProcess(number1, inputData1);
    inputProcess(number2, inputData2);
    original_num1 = number1;
    original_num2 = number2;
    
    std::vector<int>::iterator number1_iter = original_num1.begin();
    std::vector<int>::iterator number2_iter = original_num2.begin();
    
    multiplication(number1_iter, number2_iter, result);
    
#ifdef DEBUG
std::cout << "Multiplication Result: ";
for (int i = result.size()-1; i >= 0; i--) {
    std::cout << result[i];
}
    std::cout << std::endl;
#endif 
}

bool BigNumberCaculatorProject::BigNumberCaculator::multiplication(std::vector<int>::iterator number1_iter, std::vector<int>::iterator number2_iter, std::vector<int> &result) {
    int carry_over = 0;
    std::vector<int> tmp_num1(number1.size(), 0);
    std::vector<int> tmp_num2;
    for (unsigned int i = 0; i < original_num2.size(); i++) {
        tmp_num2.resize(i, 0);
        while (1) {
            if (*number1_iter * *number2_iter + carry_over > 9) {
                tmp_num2.push_back((*number1_iter * *number2_iter + carry_over) % 10);
                carry_over = (*number1_iter * *number2_iter + carry_over) / 10;
            }
            else {
                tmp_num2.push_back(*number1_iter * *number2_iter + carry_over);
                carry_over = 0;
            }
            number1_iter++;
            if (number1_iter == original_num1.end() )
                break;
        }
        if (carry_over != 0) {
            tmp_num2.push_back(carry_over);
            carry_over = 0;
        }
        
        number1 = tmp_num1;
        number2 = tmp_num2;
        
        std::vector<int>::iterator tmp_number1_iter;
        std::vector<int>::iterator tmp_number2_iter;
    
        compensationZero(tmp_number1_iter, tmp_number2_iter);
        
        result.clear();
        addition(tmp_number1_iter, tmp_number2_iter, result);
        
        tmp_num1 = result;
        tmp_num2.clear();
        number2_iter++;
        
        if (number2_iter == original_num2.end() )
            break;
            
        number1_iter = original_num1.begin();
    }
    return true;
}

void BigNumberCaculatorProject::BigNumberCaculator::division(std::string inputData1, std::string inputData2 ) {
    std::vector<int> result;
    std::vector<int> quotient_num(1, 0);
        
    inputProcess(number1, inputData1);
    inputProcess(number2, inputData2);
    original_num1 = number1;
    original_num2 = number2;
    std::vector<int>::iterator number1_iter;
    std::vector<int>::iterator number2_iter;
    
    division(number1_iter, number2_iter, quotient_num, result);
    
    while (*(result.end() - 1) == 0)
        result.pop_back();
            
#ifdef DEBUG
std::cout << "Division Quotient Result: ";
for (int i = quotient_num.size()-1; i >= 0; i--) {
    std::cout << quotient_num[i];
}
    std::cout << std::endl;

std::cout << "Division Remainder Result: ";
for (int i = result.size()-1; i >= 0; i--) {
    std::cout << result[i];
}
    std::cout << std::endl;
#endif 
    
}

bool BigNumberCaculatorProject::BigNumberCaculator::division(std::vector<int>::iterator number1_iter, std::vector<int>::iterator number2_iter, std::vector<int> &quotient_num, std::vector<int> &result ) {
    unsigned int division_times = 0;
    unsigned int quotient_num_digit = 0; 
    
    while (1) {
        compensationZero(number1_iter, number2_iter);
        
        result.clear();
        if (!subtraction(number1_iter, number2_iter, result)) {
            break;
        }
        
        number1 = result;
        division_times++;
        quotient_num[quotient_num_digit] = division_times;
    
        if (division_times == 10) {
            quotient_num.push_back(1);
            quotient_num_digit++;
            division_times = 0;
        }
    }
    result = number1;
    return true;
}
