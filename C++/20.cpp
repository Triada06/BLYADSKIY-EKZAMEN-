#include <iostream>

using namespace std;

int main()
{

    int number;
    cout << "Enter the number: " << endl;
    cin >> number;

    int firstDigit = 0, lastDigit = number % 10;

    while (number > 0)
    {
        firstDigit = number % 10;
        number = number / 10;
    }

    cout << "Sum of the elements: " << firstDigit + lastDigit;
}
