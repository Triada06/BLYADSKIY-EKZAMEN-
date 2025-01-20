#include <iostream>

using namespace std;

int main()
{
    int number, sumOfDigits = 0;
    cin >> number;

    while (number > 0)
    {
        sumOfDigits = sumOfDigits + number % 10;
        number = number / 10;
    }

    cout<<"Sum of entered number's digits : "<<sumOfDigits<<endl;
}