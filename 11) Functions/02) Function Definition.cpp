/******************************************************
 * Function Definition Notes
 * 
 * From: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535498#overview
 * 
 * SUMMARY: All stuff you know. Everything standard among languages.
*******************************************************/

#include <iostream>
#include <cmath>

using namespace std;

#pragma region Function Prototypes

void area_circle();
double calc_area_circle (double radius);
void volume_cylinder();

#pragma endregion


int main()
{
    area_circle();
    volume_cylinder();
    return 0;
}

const double pi {3.14159};

double calc_area_circle (double radius)
{
    return pi * pow(radius, 2);
}

double calc_volume_cylinder(double radius, double height)
{
    return calc_area_circle(radius) * height;
}

void area_circle()
{
    double radius{};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder()
{
    double radius{};
    double height{};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of the cyclinder: ";
    cin >> height;

    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}
