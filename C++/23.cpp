#include <iostream>

using namespace std;

int main()
{

    int number, count = 0;
    cout << "Enter the number: " << endl;
    cin >> number;

    if (number <= 1)
    {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
            count++;
    }

    if (count < 2)
    {
        cout << "Yes " << endl;
    }
    if (count > 2)
        cout << "No";
}
