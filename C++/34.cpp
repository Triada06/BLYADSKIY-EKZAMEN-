#include <iostream>

using namespace std;

int main()
{

    int size, counter = 0;

    cout << "Enter the number of elements: ";
    cin >> size;

    int list[size], reversedList[size];

    cout << "Enter elements of the list: " << endl;

    for (int i = 0; i < size; i++)
        cin >> list[i];

    for (int i = 0; i < size; i++)
    {
        reversedList[size - i - 1] = list[i];
    }


}
