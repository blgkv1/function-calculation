#include <iostream>
#include "calc.h"
using namespace std;

double calculate_case1(double x, int n) {
    double product = 1.0;
    for (int i = 1; i <= n - 2; ++i) {
        product *= (i + x);
    }
    return product;
}

double calculate_case2(double x, int n) {
    double product = 1.0;
    for (int j = 1; j <= n; ++j) {
        double sum = 0.0;
        for (int i = 1; i <= n + 3; ++i) {
            sum += (i + (1.0 / (4 * pow(j, 2))));
        }
        product *= sum;
    }
    return product;
}

double y(double x, int n) {
    if (x < 3) {
        return calculate_case1(x, n);
    } else {
        return calculate_case2(x, n);
    }
}

void input_data(double& a, double& b, int& n, double& step) {
    while (true) {
        cout << "Enter start a: ";
        cin >> a;

        cout << "Enter end b: ";
        cin >> b;

        if (cin.fail() || a > b) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Error: a must be less than b and input must be numeric. Try again." << endl;
        } else {
            break;
        }
    }

    while (true) {
        cout << "Enter integer n (n>3): ";
        cin >> n;

        if (cin.fail() || n <= 3) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Error: n must be a positive integer bigger than 3. Try again." << endl;
        } else {
            break;
        }
    }

    while (true) {
        cout << "Enter step for x: ";
        cin >> step;

        if (cin.fail() || step <= 0) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Error: step must be positive. Try again." << endl;
        } else {
            break;
        }
    }
}


