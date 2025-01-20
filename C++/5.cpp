#include <iostream>

using namespace std;

int main()
{
    int number, counter = 0;
    int penultimateDigit = 0;
    cin >> number;

    while (number > 0)
    {
        if (counter == 1)
        {
            penultimateDigit = number % 10;
            break;
        }
        counter++;
        number = number / 10;
    }

    cout <<"The penultimate digit : "<<penultimateDigit<< endl;
}