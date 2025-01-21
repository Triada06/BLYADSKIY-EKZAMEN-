#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the numbers: " << endl;
    cin >> a >> b >> c;

    int maxNumber, minNumber, middle;

    if (a >= b && a >= c)
        maxNumber = a;
    else if (b >= a && b >= c)
        maxNumber = b;
    else
        maxNumber = c;

    if (a <= b && a <= c)
        minNumber = a;
    else if (b <= a && b <= c)
        minNumber = b;
    else
        minNumber = c;

    middle = a + b + c - maxNumber - minNumber;

    cout << "Max: " << maxNumber << endl;
    cout << "Min: " << minNumber << endl;
    cout << "Middle: " << middle << endl;
}