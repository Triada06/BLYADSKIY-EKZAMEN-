#include <iostream>

using namespace std;

int main()
{

    // kod nemnojko qovenniye visel, no xz, druqoy alqoritm ne smoq pridumat :(

    int number, counter = 0, secondElement = 0;
    cout << "Enter the number: " << endl;
    cin >> number;

    int temp = number;
    while (temp > 0)
    {
        int element = temp % 10;
        temp = temp / 10;
        counter++;
    }

    for (int i = 0; i < counter - 1; i++)
    {
        secondElement = number % 10;
        number = number / 10;
    }

    cout << "The second digit:  " << secondElement;
}
