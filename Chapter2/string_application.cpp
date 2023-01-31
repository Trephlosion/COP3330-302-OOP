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

void print_by_name(string name[], string id[], string phone[], int num_clients);
void print_by_id(string name[], string id[], string phone[], int num_clients);
void print_by_phone(string name[], string id[], string phone[], int num_clients);

int main()
{

ifstream InputFile;

string name[6]={}, id[6]={}, phone[6]={}, client_info;
int index = 0;

InputFile.open("agenda_phone.txt");

if(!InputFile)
{
    cerr << "Error: file could not be opened." << endl; // file path check
    exit(1);
}


while(!InputFile.eof()) // identifies if the next line of code is empty or not.
{
    InputFile >> id[index];
    InputFile >> name[index];
    InputFile >> phone[index];
    printf("\nClient Info: %s %s %s\n", id[index].c_str(), name[index].c_str(), phone[index].c_str());// %s printing string
    
    index++;

}
index--;
print_by_name(name, id, phone, index);
print_by_id(name, id, phone, index);
print_by_phone(name, id, phone, index);

InputFile.close();
cout << "All clients were loaded..." << endl;


return 0;
}//main

void print_by_name(string name[], string id[], string phone[], int num_clients)
{
    string given_name;
    bool found = false;
    cout << "Please write the name of the client: ";
    cin >> given_name;

    for (int i=0; i < num_clients; i++)
    {
        if(given_name == name[i])
        {
            found = true;
            printf("\nThe information of the client: %s %s %s", id[i].c_str(), name[i].c_str(), phone[i].c_str());
            break;
        }
    
    }
    if(!found)
    {
        cout << given_name <<" not found.." << endl;
    }
}//print_by_name


void print_by_id(string name[], string id[], string phone[], int num_clients)
{
    string given_id;
    bool found = false;
    cout << "Please write the ID of the client: ";
    cin >> given_id;

    for (int i=0; i < num_clients; i++)
    {
        if(given_id == id[i])
        {
            found = true;
            printf("\nThe information of the client: %s %s %s", id[i].c_str(), name[i].c_str(), phone[i].c_str());
            break;
        }
    
    }
    if(!found)
    {
        cout << given_id <<" not found.." << endl;
    }
}//print_by_id


void print_by_phone(string name[], string id[], string phone[], int num_clients)
{
    string given_phone;
    bool found = false;
    cout << "Please write the phone number of the client: ";
    cin >> given_phone;

    for (int i=0; i < num_clients; i++)
    {
        if(given_phone == phone[i])
        {
            found = true;
            printf("\nThe information of the client: %s %s %s", id[i].c_str(), name[i].c_str(), phone[i].c_str());
            break;
        }
    
    }
    if(!found)
    {
        cout << given_phone <<" not found.." << endl;
    }
}//print_by_phone

