#include <iostream>

using namespace std;

int main()
{
    int number, SumOfDigits = 0;
    cin >> number;

    while (number > 0)
    {
        SumOfDigits = SumOfDigits + ((number % 10 )* (number % 10));

        number = number / 10;
    }

    cout << "Sum of squared digits: " << SumOfDigits << endl;
}