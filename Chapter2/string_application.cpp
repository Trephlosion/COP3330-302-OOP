/*
                                Rodney Whitney III
                                     COP 3330
                        This program reads a text file

*/
#include <iostream>
#include <fstream>
#include <stdio.h> //allows the use of printf function
#include <string>
#include <cstdlib> //for cerr, identify if a file exists

using namespace std;



int main()
{

ifstream InputFile;

string name, id, phone, client_info;

InputFile.open("agenda_phone.txt");

if(!InputFile)
{
    cerr << "Error: file could not be opened." << endl; // file path check
    exit(1);
}

getline(InputFile, client_info); // calls the whole line and assigns it to client_info

while(!InputFile.eof()) // identifies if the next line of code is empty or not.
{
    printf("\nClient Info: %s", client_info.c_str());// %s printing string
    getline(InputFile, client_info);

}

InputFile.close();
cout << "All clients were loaded..." << endl;


return 0;
}//main