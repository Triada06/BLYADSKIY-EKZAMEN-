#include <iostream>

using namespace std;

int main()
{
    int number, minDigit = 9;
    cin >> number;

    while (number > 0)
    {
        if (minDigit > number % 10)
            minDigit = number % 10;
        number = number / 10;
    }

    cout<<"Min digit: "<<minDigit<<endl;
}