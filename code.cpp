#include <iostream>
#include <map>
using namespace std;

int main()
{
    cout << "WELCOME TO BREW BOX CAFE!!!\n\n";
    cout << "\t\t\t\t................MENU...................\n1-Burger\n2-Veg club sandwich\n3-Margherita Pizza\n4-Pancakes with honey\n5-Pancake with whipped cream\n6-Chicken cheese fries\n7-Cheese garlic bread\n8-Caesar salad\n9-Greek Salad\n10-Boiled egg\n11-Masala Omelette\n12-Pasta\n13-American Hotdog\n14-Chocolate Pastry\n15-Red Velvet Pastry\n\t\t\t\t.....................................\n\n";
    
    map<int, string> database2 = {{1,"Burger"},{2,"Veg club sandwich"},{3,"Margherita Pizza"},{4,"Pancakes with honey"},{5,"Pancake with whipped cream"},{6,"Chicken cheese fries"},{7,"Cheese garlic bread"},{8,"Caesar salad"},{9,"Greek Salad"},{10,"Boiled egg"},{11,"Masala Omelette"},{12,"Pasta"},{13,"American Hotdog"},{14,"Chocolate Pastry"},{15,"Red Velvet Pastry"}};
    map<int, int> database1 = {{1,70},{2,40},{3,150},{4,90},{5,100},{6,130},{7,70},{8,80},{9,90},{10,30},{11,40},{12,110},{13,80},{14,60},{15,20}};
    
    int fitem;
    cout << "Please enter the corresponding number of your desired food item : ";
    cin >> fitem;
if (fitem >= 1 && fitem <= 15) {
        int fquan;
        cout << "Please enter the quantity of food item : ";
        cin >> fquan;
        int b = database1[fitem];
        string c = database2[fitem];
        int d = b * fquan;
        double GST = (d * 18) / 100.0;
        double e = d + GST;
        cout << "\nPlease Wait, Generating your Bill:\n\n";
        cout << "************************************************************************************" << endl;
        cout << "\t\t\t\t\t\tTHE BREW BOX CAFE ,Inc.\n\t\t\t\t\t\tSRM KTR;\n\t\t\t\t\t\tCHENNAI.\n\n";
        cout << "====================================================================================" << endl;
        cout << "FOOD NAME\t\t\t\t\t\tPRICE\t\t\t\t\t\t\tQUANTITY\n" << c << "\t\t\t\t\t\tRs." << b << "\t\t\t\t\t\t\t\t" << fquan << "\n\n";
        cout << "====================================================================================" << endl;
        cout << "TOTAL\t\t\t\t\t\tGST\t\t\t\t\t\tTOTAL(GST)\nRs." << d << "\t\t\t\t\tRs." << GST << "\t\t\t\t\t\t\tRs." << e << "\n\n";
        cout << "====================================================================================" << endl << endl;
        cout << "\t\t\t\tTHANK YOU FOR ORDERING FOOD WITH US.\n\n";
        cout << "************************************************************************************" << endl;
    } else {
        cout << "Enter a Valid Corresponding number\n";
 }
    cout << "\nWE HOPE TO SEE YOU AGAIN AND HAVE A NICE DAY!!!\n";
    return 0;}
