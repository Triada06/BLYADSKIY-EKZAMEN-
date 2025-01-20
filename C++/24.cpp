#include <iostream>

using namespace std;

int main()
{

    int number;
    cout << "Enter the number: " << endl;
    cin >> number;

    cout<<"Divisers of the entered number: "<<endl;
    for (int i = 1; i < number; i++)
    {
        if(number % i == 0)
            cout<<i<<endl;
    }
    
}
