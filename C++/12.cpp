#include <iostream>
#include <cmath>

using namespace std;

double AreaOfTriangle(double a, double b, double c)
{
    double s = (a + b + c) / 2;

    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main()
{
    double a, b, c;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;

    if (AreaOfTriangle(a, b, c) == 0)
        cout << "The triangle doesnt exist";

    else
        cout << "The area of the triangle: " << AreaOfTriangle(a, b, c) << endl;

}
