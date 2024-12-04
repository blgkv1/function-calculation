#include "main.h"
#include "calc.h"
#include <iostream>

int main() {
    char restart;
    do {
        double a, b, step;
        int n;

        input_data(a, b, n, step);

        for (double x = a; x <= b; x += step) {
            std::cout << "y(" << x << ") = " << y(x, n) << std::endl;
        }

        std::cout << "Do you want to restart the program? (y/n): ";
        std::cin >> restart;

    } while (restart == 'y' || restart == 'Y');

    return 0;
}