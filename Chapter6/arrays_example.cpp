#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    const int NUM_MONTH = 6;
    string month_name[NUM_MONTH]= {"January", "Febuary", "April", "May", "June", "July"};
    int day[NUM_MONTH]= {15,28,10,22,17,20};

    // for (int i=0; i<NUM_MONTH; i++)
    // {
    //     cout << endl << setw(9) << left << month_name[i] << " - " << day[i] << endl;
    // }

    string month_day[6][2]= {{"January","15"},{"Febuary","28"},{"April","10"},{"May","22"},{"June","17"},{"July","20"}};

    for (int j=0; j<NUM_MONTH; j++)
    {
        for(int i=0; i<2; i++)
        {
            cout << endl << left << " " << month_day[j][i];
        }
        cout << endl;
    }

    for (int j=0; j<NUM_MONTH; j++)
    {
        for(int i=1; i>0; i--)
        {
            cout << endl  << left << " " << month_day[j][i];
        }
        cout << endl;
    }


    return 0;
}//main





