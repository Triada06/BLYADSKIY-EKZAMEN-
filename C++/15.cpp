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

    int minElement = list[0];

    for (int i = 0; i < size; i++)
    {
        if (list[i] < minElement)
            minElement = list[i];
    }

    cout << "Min element of the list: " << minElement;
}
