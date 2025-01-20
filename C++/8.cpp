#include <iostream>
using namespace std;

double LengthOfCircumference(int radius)
{
    const double P = 3.14;
    return 2 * P * radius;
}

int main()
{
    int radius;
    cout << "Enter radious of the circumference: " << endl;
    cin >> radius;

    cout << "The length of circumference : " << LengthOfCircumference(radius) << endl;
}