//Shivangi Singh
//prn-24070123148
//B3

#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the number: ";
    cin >> a;

    if (a == 0) {
        cout << "The number is zero and it is even.";
    } 
    else if (a > 0) {
        if (a % 2 == 0)
            cout << "The number is positive and even.";
        else
            cout << "The number is positive and odd.";
    } 
    else {
        if (a % 2 == 0)
            cout << "The number is negative and even.";
        else
            cout << "The number is negative and odd.";
    }

    return 0;
}
/*Output
Enter a the number: 21
  The number is odd.
  */
