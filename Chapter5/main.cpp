#include <iostream>
#include <string>

using namespace std;

struct InvItem
{
    int partNum;
    string description;
    int onhand;
    double price;

    InvItem(){};
    InvItem(int pN, string desc, int oh, double p)
    {
        partNum = pN;
        description = desc;
        onhand = oh;
        price = p;
    }
};

void getItemData(InvItem & Item)
{
    cout << "Write the partNum of the Item: " << endl;
    cin >> Item.partNum;

    cout << "Write the descirption of the Item: " << endl;
    cin >> Item.description;

    cout << "How many items are being stored: " << endl;
    cin >> Item.onhand;

    cout << "Write the price of the Item: " << endl;
    cin >> Item.price;



}//getItemData

void printItemData(const InvItem & Item)
{
    cout << endl <<"Values from the Inventory." << endl;  
    cout <<"Part Num: " << Item.partNum << endl;  
    cout <<"Item Description: " << Item.description << endl;  
    cout <<"Number of Items on hand: " << Item.onhand << endl;  
    cout <<"Price: $" << Item.price << endl << endl;  

}

int main()
{

    InvItem Item = {487, "Laptop", 6, 2789};

    InvItem Item2;

    InvItem Item3(456, "CPU", 97, 5000);

    getItemData(Item2);

    // Item2.description = "Desktop-PC";
    // Item2.onhand = 30;
    // Item2.price = 1500;
    // Item2.partNum = 2341;

printItemData(Item);

printItemData(Item2);

printItemData(Item3);

    // cout <<"Values from the Inventory." << endl;  
    // cout <<"Part Num: " << Item2.partNum << endl;  
    // cout <<"Item Description: " << Item2.description << endl;  
    // cout <<"Number of Items on hand: " << Item2.onhand << endl;  
    // cout <<"Price: $" << Item2.price << endl;  

    return 0;
}//main