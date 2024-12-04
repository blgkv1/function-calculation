#include <iostream>
#include <cmath>
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

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Error: a must be numeric. Try again." << endl;
        } else {
            break;
        }
    }

    while (true) {
        cout << "Enter end b: ";
        cin >> b;

        if (cin.fail() || b <= a) {
            cin.clear();
            cin.ignore(10000, '\n');
            if (cin.fail()) {
                cout << "Error: b must be numeric. Try again." << endl;
            } else {
                cout << "Error: b must be greater than a. Try again." << endl;
            }
        } else {
            break;
        }
    }

    while (true) {
        double temp_n;
        cout << "Enter integer n (n>3): ";
        cin >> temp_n;

        if (cin.fail() || temp_n <= 3 || temp_n != static_cast<int>(temp_n)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Error: n must be a positive integer bigger than 3. Try again." << endl;
        } else {
            n = static_cast<int>(temp_n);
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
