#include <iostream>
#include <cmath>

double calculate_2nd(double a, double b) {

    double first_operation = 0.719 / b;
    double second_operation = (b * b - a * a) / (a * a + b * b);
    double third_operation = cos(log(b) * (M_PI / 6));

    double result = cbrt(first_operation * second_operation + third_operation);

    return result;
}

double calculate_1st(double a, double b) {
    double upward = cbrt(a) * cos(exp(b) - 1) * (M_PI / 4);
    double downward = 0.5121 * (1 - log(b / a));
    double result = upward / downward;
    return result;

}

int main() {
    double a;
    double b;

    std::cout << "Enter number a: ";
    std::cin >> a ;
    std::cout << "Enter number b: ";
    std::cin >> b ;

    // double result = calculate_1st(a, b);
    double result = calculate_2nd(a, b);
    std::cout << "The result is: " << result;
}