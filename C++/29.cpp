#include <iostream>

using namespace std;

int main() {
    double radius, volume, surfaceArea;
    const double P = 3.14;

    cout << "Enter the radius: ";
    cin >> radius;

    if (radius <= 0) {
        cout << "Radius can't be negative" << endl;
        return 1;
    }

    volume = (4.0 / 3.0) * P * (radius * radius * radius);
    surfaceArea = 4 * P * (radius * radius);

    cout << "Volume: " << volume << endl;
    cout << "Surface Area: " << surfaceArea << endl;

    return 0;
}
