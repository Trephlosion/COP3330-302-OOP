#include <iostream>


using namespace std;

int main()
{
    int *ptr;

    int array[4]={3,5,7,8};

    ptr = array;

    for(int index =0; index < 4; index++)
    {
        cout << array[index]<< endl;
    }

cout << endl;
    for(int index =0; index < 4; index++)
    {
        cout << (ptr+index)<< endl;
    }


    return 0;
}//main