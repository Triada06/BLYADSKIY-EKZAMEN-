#include <iostream>

using namespace std;

int main()
{
    int number, couintOfDigits = 0;
    cin >> number;

    if (number == 0)
        cout << "count of digits: " << 1 << endl;
    else
    {
        while (number > 0)
        {
            couintOfDigits++;
            number = number / 10;
        }

        cout << "Count of digits: " << couintOfDigits << endl;
    }
}