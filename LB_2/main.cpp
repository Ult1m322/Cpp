#include <iostream>

using namespace std;


double task1(double b,double c, double x) {
    double y;

    if (x < 2) {

        y = (x - 9 * b * x) / (x - 2 * b * x * x);
    }else {
        y = (x - 2 * c * x) / (x - 5 * c * x * x * x);
    }

    return y;
}
double task2(double x, double y) {
    bool guess;
    if (y >= 0 & y<=1 & x>=0 & x<=2) {
        cout << "you guessed";
        guess = true;

    }
    else {
        cout << "No guess" ;
    }
    return guess;
}
int main() {
    double b;
    double c;
    double x;
    double y;

    int current_task;
    cout << "choose task";
    cin >> current_task;

    if (current_task == 1) {
        cout << "Enter b:";
        cin >> b;
        cout << "Enter c:";
        cin >> c;
        cout << "Enter x:";
        cin >> x;
        cout << "Result of y is:" << task1(b,c,x);
    }

    else if (current_task == 2) {
        cout << "Enter x:";
        cin >> x;
        cout << "Enter y:";
        cin >> y;
        task2(x,y);

    }
    else {
        cout << "Wrong choose task";
    }


}
