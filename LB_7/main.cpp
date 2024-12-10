#include <iostream>
#include <cmath>
using namespace std;

int first_task() {
    int steps = 0;
    int cO;
    cout << "Enter cO: ";
    cin >> cO;
    while (cO!=1) {
    if (cO%2 == 0) {
        cO=cO/2;
    }
    else {
        cO=3*cO+1;
    }
    cout << cO << "\n";
    steps++;
}
    cout <<"steps:" <<steps;
    return 0;
}

int second_task() {
    double pi4 = 0.;
    long n;
    cout << "Number of iterations? ";
    cin >> n;
    for (int k = 0; k < n; k++) {
        pi4 += pow(-1, k) / (2*k+1);
    }
    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << endl;
    return 0;
}
int third_task() {
    int n;
    cout<< "Enter side of square";
    cin >> n;

    if(n>40) {
        cout<<"that's too big, enter the side up to 40";
    }

    cout << '+';
    for(int i = 0; i < n-2; i++)
        cout << '-';
    cout << '+' << endl;
    for(int i = 0; i < n-2; i++) {
        cout << '|';
        for(int j = 0; j < n-2; j++)
            cout << ' ';
        cout << '|' << endl;
    }
    cout << '+';
    for(int i = 0; i < n-2; i++)
        cout << '-';
    cout << '+' << endl;
    return 0;
}

int main() {
    int current_task;
    cout<<"Enter Task Number: ";
    cin>>current_task;
    switch (current_task) {
        case 1: { first_task(); break;}
        case 2: {second_task();break;}
        case 3: {third_task();break;}
        default: cout<<"Invalid Task Number"<<endl;
    }
}
