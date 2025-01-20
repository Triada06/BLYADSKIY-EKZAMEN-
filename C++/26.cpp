#include <iostream>

using namespace std;

double VolumeOfCylinder(double radius, double height)
{
    return 3.14 * radius * radius * height;
}


int main()
{
    double radius, height;
    cout<<"Enter radius and height:"<<endl;
    cin>>radius>>height;

    cout<<"Value of the cylinder: "<<VolumeOfCylinder(radius,height);
}