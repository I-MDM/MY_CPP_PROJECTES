#include <iostream>
using namespace std;
int main(){
  
int option;
int num_1;
int num_2;

cout << "==================\n";
cout << "WELCOME\n";
cout << "==================\n";
cout << "First num: ";
cin >> num_1;
cout << "Second num: ";
cin >> num_2;

cout << "=================== " << endl;
cout << "[1] ==> +" << endl;
cout << "[2] ==> -" << endl;
cout << "[3] ==> *" << endl;
cout << "[4] ==> /" << endl;
cout << "=================== " << endl;
cout << "Choose Operation Number: ";
cin >> option;

    switch(option)
    {
      case 1:
        cout << num_1 << "+" << num_2 << "=" << num_1 + num_2;
      break;
      
      case 2:
        cout << num_1 << "-" << num_2 << "=" << num_1 - num_2;
      break;
    
      case 3:
        cout << num_1 << "*" << num_2 << "=" << num_1 * num_2;
      break;
      
      case 4:
        cout << num_1 << "/" << num_2 << "=" << num_1 / num_2;
      break;
      
      default:
        cout << "are you blind or something ?"; // just kidding 🤣🤣
    }
  
  
}
