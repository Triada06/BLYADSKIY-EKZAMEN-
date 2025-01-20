#include <iostream>

using namespace std;

int main()
{

    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    int list[size];

    cout << "Enter elements of the lis: " << endl;

    for (int i = 0; i < size; i++)
        cin >> list[i];

    int maxElement = list[0];

    for (int i = 0; i < size; i++)
    {
        if (list[i] > maxElement)
            maxElement = list[i];
    }

    cout << "Max element of the list: " << maxElement;
}
