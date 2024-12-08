#include <iostream>
#include <cmath>
#include <string>

class Calculator {
public:
    int floor(double number) {
        return static_cast<int>(std::floor(number));
    }

    int add(int num1, int num2) {
        return num1 + num2;
    }

    double max1(double num1, double num2) {
        return std::max(num1, num2);
    }

    bool find1(const std::string& str, char ch) {
        return str.find(ch) != std::string::npos;
    }

    int max2(int numbers[], int size) {
        int max = numbers[0];
        for (int i = 1; i < size; ++i) {
            if (numbers[i] > max) {
                max = numbers[i];
            }
        }
        return max;
    }
};

int main() {
    Calculator calc;

    std::cout << calc.floor(5.67) << std::endl;
    std::cout << calc.add(10, 20) << std::endl;
    std::cout << calc.max1(3.5, 4.2) << std::endl;
    std::cout << (calc.find1("hello", 'a') ? "true" : "false") << std::endl;

    int arr[] = {3, 5, 7, 2, 8};
    std::cout << calc.max2(arr, 5) << std::endl;

    return 0;
}