//Shivangi Singh 
//prn-24070123148
//B3

#include <iostream>
using namespace std;
int main(){
    char a ;
    cout << "Enter the character: ";
    cin >> a ; //input
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'   ){//if condition
        cout << "The character is a vowel." ;//output for vowel
} 
else{
    cout << "The character is a consonant." ;
}
return 0;
}
/*Output
  Enter the character : S
  The character is a consonant.
   Enter the character : P
  The character is a consonant.
   Enter the character : i
  The character is a vowel.
 Enter the character : u
  The character is a vowel.
  */
