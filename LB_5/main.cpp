#include <iostream>
#include <cmath>
using namespace std;

int first_task() {
    int x_calc = 0;
    while (x_calc < 5) {
        double x;
        cout << "Enter x value:" << endl;
        cin >> x;
        double y = pow(sin(x), 5) + fabs(5 * x - 1.5);
        cout << "Y = " << y << endl;
        x_calc++;
    }
    return 0;
}

int second_task() {
    double value = 1;
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            value = value * i;
            cout << "number " << i << " even " << "value multiplied, result:" << value << endl;
        }
    }
    return 0;
}

int third_task() {
    int start;
    int end;
    int step;
    cout << "Enter start" << endl;
    cin >> start;
    cout << "Enter end" << endl;
    cin >> end;
    cout << "Enter step" << endl;
    cin >> step;
    cout << "------------\n" << ":" << "x" << ":" << "y" << ":" << endl;
    for (int x = start; x <= end; x++) {
        if (x == -7) {
            continue;
            // cout << -7 <<"------------\n" << "there's invalid value" << endl;
        }
        double y = (5 * pow(x, 2) - 7 * x + 3) / (x + 7) - 13 * cos(x);
        cout << "------------\n" << ":" << x << ":" << y << ":" << endl;
    }
    return 0;
}

int main() {
    int current_task;
    cout << "Enter task:" << endl;
    cin >> current_task;
    switch (current_task) {
        case 1: {
            first_task();
            break;
        };
        case 2: {
            second_task();
            break;
        };
        case 3: {
            third_task();
            break;
        };
        default: {
            cout << "Invalid Task" << endl;
        };
    }
}
