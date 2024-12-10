#include <cmath>
#include <iostream>
#include <bits/locale_facets_nonio.h>
using namespace std;


int main(void) {
  int current_task;
  cout<<"Enter Task: ";
  cin>>current_task;
  switch (current_task) {
    case 1: {
      bool answer;
      int value;
      cout << "Enter a value: ";
      cin >> value;
      answer = value>=0 && value<10 || value*2 <20 && value-2 > -2 || value-1>1 && value/2 <10 || value==111;
      cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
      return 0;
      break;
    }
    case 2: {
      double value;
      cout << "Enter a value: ";
      cin >> value;
      printf("%.1f\n" , value);
      printf("%.2f\n" , value);
      printf("%.6f\n" , value);
      printf("%.2f\n" , value);
      printf("%.0f\n" , value);
      break;
    }
    case 3: {
      double value1;
      double value2;
      cout << "Enter a value1: ";
      cin >> value1;
      cout << "Enter a value2: ";
      cin >> value2;
      double value1_compare = 1/value1;
      double value2_compare = 1/value2;
      double compare = fabs(value1_compare - value2_compare);

      cout << (compare<0.01?"equal":"not equal");
      break;
    }
    case 4: {

      int value1;
      int value2;
      int value3;
      int value4;

      cout << "Enter a value1: ";
      cin >> value1;
      cout << "Enter a value2: ";
      cin >> value2;
      cout << "Enter a value3: ";
      cin >> value3;
      cout << "Enter a value4: ";
      cin >> value4;

      if(value1>=0&&value1<=255 && value2>=0&&value2<=255 && value3>=0&&value3<=255 && value4>=0&&value4<=255) {
        cout << to_string(value1) + "." + to_string(value2) + "." + to_string(value3) + "." + to_string(value4);
      }
      else {cout << "there's some numbers over than 255 or some characters";}
      break;


    }


  }

}
