#include "Array.h"
#include <iostream>

using namespace std;


int main()
{


    double values[] = {4,6,8,12,10};
    int size =5;


    Array obj2(size, values);
    Array obj1;


    obj1 = obj2;


    cout << "Printing Object 1" << endl;
    obj1.print();

    cout << "Printing Object 2" << endl;
    obj2.print(); 

    double newvalues[] = {14,36,28,42,90};
    obj1.setValues(newvalues)  

    cout << "Printing Object 1" << endl;
    obj1.print();

    cout << "Printing Object 2" << endl;
    obj2.print();



    return 0;
}