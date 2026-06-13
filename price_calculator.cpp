#include <iostream>
using namespace std;

int main() {
    int price = 500;
    int descount; 
    int years;

    cout << "work years: ";
    cin >> years;

    switch(years) {
        case 1:
            descount = 30;
            cout << "the price is: $" << price - descount << endl;
            break;
        
        case 2:
            descount = 60;
            cout << "the price is: $" << price - descount << endl;
            break;
        
        case 3:
            descount = 90;
            cout << "the price is: $" << price - descount << endl;
            break;
        
        default: 
            if (years >= 4) 
                cout << "for free" << endl;
             else 
                cout << "Invalid years! The price is: $" << price << endl;
            
            break;
    }

    return 0;
}