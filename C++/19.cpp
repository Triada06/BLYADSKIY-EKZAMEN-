#include <iostream>

using namespace std;

int main()
{

    int size, counter = 0, sum = 0;

    cout << "Enter the number of elements: ";
    cin >> size;

    int list[size];

    cout << "Enter elements of the lis: " << endl;

    for (int i = 0; i < size; i++)
        cin >> list[i];

    for (int i = 0; i < size; i++)
    {
        if (list[i] % 2 == 0)
        {
            counter++;
            sum = sum + list[i];
        }
    }

    cout << "Number of the even elements:" << counter << endl;
    cout << "SUm of the even elements:" << sum << endl;
}
