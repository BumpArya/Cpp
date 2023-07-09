/*
Parameterized constructors are those constructors that take one or more parameters. 
Default constructors are those constructors that take no parameters.
*/

#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
    int r, i;

public:
    Complex(int, int);

    void printNumber()
    {
        cout << "Your number is " << r << " + " << i << "i" << endl;
    }
};

class point
{
    int x, y;

public:
    point(int p, int q)
    {
        x = p;
        y = q;
    }

    float distance()
    {
        return sqrt((x * x) + (y * y));
    }

    friend float distance_pts(point p1, point p2);
};

float distance_pts(point p1, point p2)
{
    return sqrt(((p1.x - p2.x) * (p1.x - p2.x)) + ((p1.y - p2.y) * (p1.y - p2.y)));
}

Complex ::Complex(int a, int b)
{ // This is a parameterized constructor
    r = a;
    i = b;
}

int main()
{
    Complex c1(5, 2); // Implicit Call
    c1.printNumber();

    Complex c2 = Complex(6, 3); // Explicit Call
    c2.printNumber();

    point p1(1, 1);
    cout << "The distance of point p1 from origin is " << p1.distance() << endl;

    point p2(1, -1);
    cout << "The distance between p1 and p2 is " << distance_pts(p1, p2) << endl;

    return 0;
}