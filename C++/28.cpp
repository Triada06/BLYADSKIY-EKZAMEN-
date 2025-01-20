#include <iostream>
#include <cmath>

using namespace std;

double Discriminant(double a, double b, double c)
{
    double d = ((b * b) - (4 * a * c));

    return d;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    double d = Discriminant(a, b, c);

    if (d > 0)
    {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);

        cout << "The solutions of the equation are: " << endl;
        cout << x1 << " " << x2;
    }

    else if (d == 0)
    {
        double x = -b / (2 * a);
        cout << "The solution of the equation is: " << endl;
        cout << x;
    }

    else
    {
        cout << "There are no real solutions for this equation";
    }
}