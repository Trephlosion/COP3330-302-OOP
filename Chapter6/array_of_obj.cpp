#include <iostream>
#include <iomanip>
#include "bank_client/BankAccount.h"
#include <string>

const int NUM_MACHINE = 3;
const int NUM_ACCT = 3;

using namespace std;

struct Machine
{
    string machine_id;
    string location;

    Machine(string id, string loc)
    {
        location = loc;
        machine_id = id;
    }
};




int main()
{
    string answer;
    string city;
    int expression;
    int bank_index;
    int num_account;
    int machine_index;



    Machine machines[NUM_MACHINE] = {Machine{"230-09-87", "Tallahasse"}, Machine{"174-89-65", "Orlando"}, Machine{"541-67-09", "Gainsville"}};

    BankAccount b_account[NUM_MACHINE];
    b_account[0].set_BankFullInfo(5456,"Michael-Suarez",3472,76321);
    b_account[1].set_BankFullInfo(450,"Carlos-Theran",7654,98761);
    b_account[2].set_BankFullInfo(1230,"Rony-McKloain",7654,98761);

    cout<< "Do you want to do any transactions? ";
    cin >> answer;

    if(answer == "yes")
    {
        cout << "\nSelect the city where you are making your trasnaction to. ";
        cin>> city;

    }






    return 0;
}//main