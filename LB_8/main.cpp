#include <algorithm>
#include <iostream>
#include <bits/ranges_algo.h>
using namespace std;

int task1() {
    int array[12];
    cout << "First array: ";
    for (int i = 0; i < 12; i++) {
        array[i] = rand()% 101-50;
        cout <<array[i] << " ";
    }
    cout << endl;

    sort(array, array + 12);

    cout << "Sorted by graduation: ";
    for (int i = 0; i < 12; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    sort(array, array + 12, greater<int>());
    cout << "Sorted by degradation: ";
    for (int i = 0; i < 12; i++) {
        cout << array[i] << " ";
    }
}

int task2() {
    int array[12];
    cout << "Second task"<< endl;
    cout << "array: ";
    for (int i = 0; i < 12; i++) {
        array[i] = rand()% 101-50;
        cout <<array[i] << " ";
    }
    cout << endl;

    int max_numb;
    for (int i = 0; i < 11; i++) {
        if (array[i] > array[i + 1]) {
            max_numb = i;
        }

    }
    cout << "new array: ";
    for (int i = 0; i < max_numb; i++) {
        if (array[i] <0) {
            array[i] = 0;
        }
    }

    for (int i = 0; i < 12; i++) {
        cout << array[i] << " ";
    }

}

int main() {
    int current_task;
    cout << "Enter number of task: ";
    cin >> current_task;
    switch (current_task) {
        case 1:task1();break;
        case 2: task2();break;
        default:
            cout << "Invalid Task!" << endl;
    }
}
