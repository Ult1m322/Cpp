#include <algorithm>
#include <iostream>
#include <cstdlib>
using namespace std;


int task3() {
    int array[10];

    cout << "First array: ";
    for (int i = 0; i < 10; i++) {
        array[i] = rand() % 101 - 50;
        cout << array[i] << " ";
    }
    cout << endl;


    int max_numb = 0;
    int min_numb = 0;

    for (int i = 1; i < 10; i++) {

        if (array[i] > array[max_numb]) {
            max_numb = i;
        }

        if (array[i] < array[min_numb]) {
            min_numb = i;
        }

    }


    int dop_variable = array[max_numb];
    array[max_numb] = array[min_numb];
    array[min_numb] = dop_variable;


    cout << "New array:    ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}




    int task4() {
    int array[10];
    cout << "First array: ";
    for (int i = 0; i < 10; i++) {
        array[i] = rand() % 101 - 50;
        cout << array[i] << " ";
    }
    cout << endl;

    int A;
    int count=0;
    cout << "Enter number A: ";
    cin >> A;

    for (int i = 0; i < 10; i++) {
        if (A > array[i]) {
            count++;
        }
    }
    cout << "Answer:" << count << endl;

}

    int task5() {

    int array[10];
    cout << "First array: ";
    for (int i = 0; i < 10; i++) {
        array[i] = rand() % 101 - 50;
        cout << array[i] << " ";
    }
    cout << endl;

    sort(array, array + 10);
    cout << "Sorted by graduation: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int length = size(array);
    int second_top = array[length-2];
    cout << "second top numb is: " <<second_top << endl;
}

    int task6() {

    int array[10] = {1, 14, 8, 0, 16, 12, 0, -3, -18, 1};
    //int array[10] = {7, 5, 13, -20, 8, 11, 16, 1, 3, -12};

    int length = size(array);
    bool null_elems = false;
    for (int i = 0; i < length; i++) {

        if (array[i] == 0) {
            cout << "First null element is: " << i+1 <<", with index: "<< i <<endl;
            null_elems = true;
            break;
        }
    }

    if (null_elems==false) {
        cout << "There's no null elements" << endl;
    }

}

    int main() {
        int current_task;
        cout << "Please enter the task number: ";
        cin >> current_task;
        switch (current_task) {
            case 1: task3(); break;
            case 2: task4(); break;
            case 3: task5(); break;
            case 4: task6(); break;
            default: cout << "wrong chosen task" << endl; break;
        }

    }

