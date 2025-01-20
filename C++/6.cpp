#include <iostream>

using namespace std;

int main()
{
    int number, counter = 0;
    cin >> number;

    while (number > 0)
    {
        if (number % 10 == 0)
            counter++;

        number = number / 10;
    }

    cout << "The number of digits that are equal to zero is:  " << counter << endl;
}