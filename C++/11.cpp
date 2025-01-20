#include <iostream>

using namespace std;

bool IsTriangleValid(double a, double b, double c)
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main()
{
    double a, b, c;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;

    if (IsTriangleValid(a, b, c))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
