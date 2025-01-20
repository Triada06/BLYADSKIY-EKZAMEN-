#include <iostream>

using namespace std;

int main()
{
    int number, maxDigit = 0;
    cin >> number;

    while (number > 0)
    {
        if (maxDigit < number % 10)
            maxDigit = number % 10;
        number = number / 10;
    }

    cout<<"Max digit: "<<maxDigit<<endl;
}