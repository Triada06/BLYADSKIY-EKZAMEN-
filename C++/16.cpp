#include <iostream>

using namespace std;

int main()
{

    int size, sum = 0, count = 0;

    cout << "Enter the number of elements: ";
    cin >> size;

    int list[size];

    cout << "Enter elements of the lis: " << endl;

    for (int i = 0; i < size; i++)
        cin >> list[i];

    for (int i = 0; i < size; i++)
    {
        sum = sum + list[i];
        count++;
    }

    cout << "Arithmetic mean of the elements of the list: " << sum / count;
}
