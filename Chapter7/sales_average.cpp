#include <iostream>

using namespace std;




int main()
{
    
    double *sales = nullptr;
    double total = 0.0, average;
    

    int num_days;

    cout << endl << "How many days of sales do you want to process? ";
    cin >> num_days;

    sales = new double[num_days];

    cout << endl << "Enter the sales:\n";

    for(int index=0; index<num_days; index++)
    {
        cout << "Day "<< index+1 <<": $";
        cin >> sales[index];
    }

    for(int index=0; index<num_days; index++)
    {
        total = total + sales[index];
    }

    cout<<"\nTotal sales: $" <<total<<endl;
    cout <<"Average sales: $"<< total/num_days <<endl;





    return 0;
}