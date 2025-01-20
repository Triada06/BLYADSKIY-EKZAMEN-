#include <iostream>

using namespace std;

int main()
{

    int size, counter = 0, sum = 0;

    cout << "Enter the number of elements: ";
    cin >> size;

    int list[size], newList[size];

    cout << "Enter elements of the lis: " << endl;

    for (int i = 0; i < size; i++)
        cin >> list[i];

    for (int i = 0; i < size; i++)
        newList[i] = list[i] * list[i];

    for (int i = 0; i < size; i++)
        cout << newList[i] << " ";
}
