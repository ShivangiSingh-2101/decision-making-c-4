//Shivangi Singh
//prn 24070123148
//B3
#include <iostream>
using namespace std;
int main()
{
    int a, b ,c ;//variables
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Calculator Menu" <<"\n"; 
    cout << "Enter 1 for Addition"<< "\n";
    cout << "Enter 2 for Subtraction" << "\n";
    cout << "Enter 3 for Multiplication" << "\n";
    cout << "Enter 4 for Division" << "\n";
    cin >> c;
    switch(c) { //switch case
        case 1:
            cout << "Result: " << a + b ;
            break;
        case 2:
            cout << "Result: " << a - b ;
            break;
        case 3:
            cout << "Result: " << a * b ;
            break;
        case 4:
            if (b != 0) {
                cout << "Result: " << a/ b;
            } else {    
                cout << "not defined" << "\n";
            }
            break;
        default: //default statement
            cout << "Enter Valid option";
    }
    return 0;
}

