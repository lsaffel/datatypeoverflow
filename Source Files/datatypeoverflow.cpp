#include <iostream>
using namespace std;

int main()
{
    int intMax = INT_MAX;
    cout << intMax << endl; // result: 2147483647
    cout << intMax + 1;     // result: -2147483648. 
                            // It went back around to the min value
}