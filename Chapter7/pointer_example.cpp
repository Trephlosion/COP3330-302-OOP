#include <iostream>

using namespace std;

int main()
{
    int x = 23;
    int *ptr;
    ptr = &x;

    cout << "memory location: " << ptr << endl;
    cout << "value of ptr: " <<*ptr << endl;
    cout << "value of x: "<< x;

    return 0;
}//main