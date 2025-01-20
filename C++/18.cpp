#include <iostream>

using namespace std;

int main() {
   
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    int list[size];

    cout << "Enter elements of the lis: " << endl;

    for (int i = 0; i < size; i++)
        cin >> list[i];

    

    cout << "Sum of the elements of the list: " << list[0] + list[size-1]<<endl;
    cout << "Difference of the elements of the list: " << list[0] - list[size-1]<<endl;
    cout << "Product of the elements of the list: " << list[0] * list[size-1]<<endl;

}
