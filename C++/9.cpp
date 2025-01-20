#include <iostream>
using namespace std;

double AreaOfCircumference(int radius)
{
    const double P = 3.14;
    return P * (radius * radius);
}

int main()
{
    int radius;
    cout << "Enter radious of the circumference: " << endl;
    cin >> radius;

    cout << "The area of circumference : " << AreaOfCircumference(radius) << endl;
}