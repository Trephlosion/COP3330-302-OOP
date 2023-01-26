/*
                                Rodney Whitney III
                                     COP 3330
                This program finds the roots for a quadratic equation ax^2+bx+c=0

*/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

void general_formula(double a, double b, double c)
{
double x_sol1 = 0.0, x_sol2 = 0.0;
double discriminant = 0.0;
discriminant = pow(b,2)-4*a*c;

if (discriminant >= 0)
{
x_sol1 = (-b + sqrt(discriminant))/(2*a);

x_sol2 = (-b - sqrt(discriminant))/(2*a);


cout << showpoint;
cout << "\nThe real solutions for the given problem are: " << endl;

cout << left << "First solution  -------> " << setw(4) << right << setprecision(4) << x_sol1 << endl;
cout << left << "Second solution -------> " << setw(4) << right << setprecision(4) << x_sol2 << endl;
}

else
{
cout << left << "\nNo solution. The Descrimant value is : " << discriminant <<endl;


}
}//general_formula

void vertex(double a, double b, double c )
{
   double vertex1= 0.0, vertex2 =0.0;

   vertex1 = -b/(2*a);
   vertex2 = a*pow(x,2)+b*x+c;

   printf("\n The Verticies are (%.4f,%.4f)", vertex1, vertex2);
}//vertex



void evaluation(double a, double b, double c, double x_values[], double y_values[], int length)
{
   for(int i=0; i < length; i++)
   {
      y_values[i] = a*pow(x_values[i],2)+b*x_values[i]+c;
      cout << "For x=" << x_values[i] << "; y=" << y_values[i] << endl;
   }
}

int main()
{
double a, b, c;
int length =6;
string answer1 = "yes";
string answer2 = "yes";
double x_values[]= {2,3,4,5,7,8};
double y_values[6]= {};

while(answer1 == answer2)
{
 cout << endl << "Please provide the coefficients of your Quadratic Equation. " << endl;
 cin >> a >> b >> c;

general_formula(a,b,c);

cout << endl << "Do you wish to continue?  Yes/No";

cin >> ws;
getline(cin,answer2);

evaluation(a,b,c,x_values,y_values[],length)
 
}   
   return 0;
}//main