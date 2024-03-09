#include <iostream>
using namespace std;

int main()
{
    // int intMax = INT_MAX;
    // cout << intMax << endl; // result: 2147483647
    // cout << intMax + 1;     // result: -2147483648. 
    //                         // It went back around to the min value

    cout << (int)'a' << endl;   // prints the number 97
    cout << int('a') << endl;   // prints the number 97 (prints 2 circled then 97, for this line and the previous line)
    cout << int('A') << endl;   // prints the number 65

        // this or this is a "casting operator": (int)'a'   or int('a')

    cout << char(65) << endl;     // prints the letter A
}