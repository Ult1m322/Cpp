#include <iostream>

using namespace std;

int main() {
    int N;
    int valid_numbs=0;

    cout << "Input your number: ";
    cin >> N;

    while (N>0) {
        int separate_numb = N%10;
        if (separate_numb != 9 & separate_numb != 1) {
            valid_numbs ++;
        }
        N = N/10;
    }
    cout << valid_numbs;
}
