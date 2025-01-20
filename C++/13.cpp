#include <iostream>

using namespace std;

int main()
{

    int size;

    cout<<"Enter the number of elements: ";
    cin >> size;

    int list[size], sumOfElements = 0;

    cout << "Enter elements of the lis: " << endl;

    for (int i = 0; i < size; i++)
        cin >> list[i];

    for (int i = 0; i < size; i++)
        sumOfElements = sumOfElements + list[i];

    cout << "Sum of the elements : " << sumOfElements;
}
