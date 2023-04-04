#include <iostream>
#include "Bed.h"


Bed::Bed(int size)
{
    num_bed = size;
    length = new int[num_bed];
    width = new int[num_bed]; 

    for(int index= 0; index<num_bed; index++)
    {
        cout << "\nWrite the size (length and width) of your bed "<< index+1 <<": ";
        cin >> length[index] >> width[index];
    }

}

void Bed::print_info()
{
    for(int index=0; index<num_bed; index++)
    {
        cout << "Size of Bed #" <<index+1<<": "<<length[index]<<", "<<width[index]<< endl;
    }

}

void Bed::price()
{
    for(int index=0; index<num_bed; index++)
    {
        cout << "Price of Bed #"<< index+1<< ": $" <<((length[index]*width[index])*2.5)<< endl;
    }
}

void Bed::setbed(int size)
{
    num_bed = size;
    length = new int[num_bed];
    width = new int[num_bed]; 

    for(int index= 0; index<num_bed; index++)
    {
        cout << "\nWrite the size (length and width) of your bed "<< index+1 <<": ";
        cin >> length[index] >> width[index];
    }

}
