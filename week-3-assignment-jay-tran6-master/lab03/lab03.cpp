
// Jayden Tran 
// jtr7p@mail.umkc.edu
// 2 - 1 - 21
// CS201L Lab 03

#include <iostream>
#include<string>

using namespace std;
const float childCost = 10.95;
const float adultCost = 19.99;
const float seniorCost = 18.99;
const float vipCost = 7.99;

int main()
{
    cout << "Welcome to Fun Park Meny System !!" << endl;


    int i; 
    float fullDayTotal = 0;
    int input;
    float total;

    for (i = 0; i < 3; ++i) {
        cout << "Starting day " << i + 1 << endl;

        char choice;
        int children = 0;
        int adult = 0;
        int senior = 0;
        int vip = 0;
        float dayTotal = 0;

        while (true) {
            cout << endl << "Enter (C)hild, (A)dult,(S)enior,(V)ip or (Q)uit >> ";
            cin >> choice;
            if (choice == 'c' || choice == 'C') {
                cout << endl << "How Many children ? ";
                cin >> input;
                children += input;
            }
            else if (choice == 'a' || choice == 'A') {
                cout << endl << "How Many Adults ? ";
                cin >> input;
                adult += input;
            }
            else if (choice == 's' || choice == 'S') {
                cout << endl << "How Many seniors ? ";
                cin >> input;
                senior += input;
            }
            else if (choice == 'v' || choice == 'V') {
                cout << endl << "How Many VIPs ? ";
                cin >> input;
                vip += input;
            }
            else if (choice == 'q' || choice == 'Q') {
                break;
            }
        }
        cout << endl << "Day " << i + 1 << endl;
        total = childCost * children;
        dayTotal += total;
        cout << "\t\t" << "Child " << children << " @ " << childCost << " = " << total << endl;

        total = adultCost * adult;
        dayTotal += total;
        cout << "\t\t" << "Adult " << adult << " @ " << adultCost << " = " << total << endl;

        total = seniorCost * senior;
        dayTotal += total;
        cout << "\t\t" << "Senior " << senior << " @ " << seniorCost << " = " << total << endl;

        total = vipCost * vip;
        dayTotal += total;
        cout << "\t\t" << "VIP " << vip << " @ " << vipCost << " = " << total << endl;

        cout << endl << endl;
        cout << "\t\tTotal = " << dayTotal << endl << endl;

        fullDayTotal += dayTotal;
    }
    cout << "The total for all days is : " << fullDayTotal;
    return 0;
}
