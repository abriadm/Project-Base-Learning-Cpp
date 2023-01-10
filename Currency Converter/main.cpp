#include <iostream>
using namespace std;

int main()
{
    float dollar;
    float bp = (1/1.487);

    cout << "Enter the Dollars for Conversion: ";
    cin >> dollar;
    cout << "British Pounds : " << bp * dollar << endl;
    return 0;
}