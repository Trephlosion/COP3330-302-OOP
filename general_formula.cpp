/*
                                Rodney Whitney III
                                     COP 3330
                This program finds the roots for a quadratic equation ax^2+bx+c=0

*/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;



int main()
{
double a = 1, b=20, c=5;
double discriminant = 0.0;
double x_sol1 = 0.0, x_sol2 = 0.0;
 discriminant = pow(b,2)-4*a*c;
 if (discriminant >= 0)
{
x_sol1 = (-b + sqrt(discriminant))/(2*a);

x_sol2 = (-b - sqrt(discriminant))/(2*a);


cout << showpoint;
cout<< "\nThe real solutions for the given problem are: " << endl;

cout << left << "First solution  -------> " << setw(4) << right << setprecision(4) << x_sol1 << endl;
cout << left << "Second solution -------> " << setw(4) << right << setprecision(4) << x_sol2 << endl;
}
else
{
cout << left << "\nNo solution. The Descrimant value is : " << discriminant <<endl;
}
    return 0;
}//main