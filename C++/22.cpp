#include <iostream>

using namespace std;

int main()
{

    int number, countEven = 0, countOdd = 0;
    cout << "Enter the number: " << endl;
    cin >> number;

    while (number > 0)
    {
        if (number % 2 == 0)
            countEven++;
        if (number % 2 != 0)
            countOdd++;
        number = number / 10;
    }

    cout << "The number of Even digitsL:  " << countEven;
    cout << "The number of ODd digitsL: " << countOdd;
}
