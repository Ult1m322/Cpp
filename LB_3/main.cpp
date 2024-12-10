#include <iostream>
using namespace std;

int task1() {
    int n;
    cout << "Enter N:";
    cin >> n;
    if(n >= 100 & n <= 999) {
        int hundreds = n / 100;
        int tens = (n / 10) % 10;
        int ones = n % 10;


        int even = 0;

        if (hundreds % 2 == 0) {
            even++;
        }
        if (tens % 2 == 0) {
            even++;
        }
        if (ones % 2 == 0) {
            even++;
        }

        cout << "There's even numbers of " << n << ": " << even;

    }
    else {
        cout << "N must be 3-digit";
    }

return 0;
}

int task2() {
    int railway;
    string start_station;
    string end_station;
    cout << "what railway do you need?";
    cin >> railway;
    switch (railway) {
        case 1: start_station = "start1" , end_station = "end1";break;
        case 2: start_station = "start2" , end_station = "end2";break;
        case 3: start_station = "start3" , end_station = "end3";break;
        case 4: start_station = "start4" , end_station = "end4";break;
        case 5: start_station = "start5" , end_station = "end5";break;
        case 6: start_station = "start6" , end_station = "end6";break;
        case 7: start_station = "start7" , end_station = "end7";break;
        default: cout<<"there's no that's railway";return 0;
    }
    cout << "start station of the "<<railway<<" is "<< start_station<<"\n";
    cout << "end station of the "<<railway<<" is "<< end_station;
    return 0;
}

int main() {
    int current_task;
    cout << "choose task: ";
    cin >> current_task;

    if (current_task == 1) {
        task1();
    }
    else if (current_task == 2) {
        task2();
    }
    else {
        cout << "invalid choose task";
    }
}
