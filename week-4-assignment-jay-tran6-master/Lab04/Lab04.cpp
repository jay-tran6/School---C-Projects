// Jayden Tran 
// jtr7p@mail.umkc.edu
// 2 - 8 - 21
// CS201L Lab 04

#include <iostream>
#include <string>
#include <math.h> 
#include "checkingmodule.h"
using namespace std;


int main() {

	float accountValue = 0.0f;
	float d, w, borrowed, interest, total;
	char menu;
	int credit, loanMonths;

	while (1) {
		menu = MainMenu();

		switch (menu) { //withdraw 
		case 'd':
		case 'D':
			d = GetValue("Enter an amount to deposit ==> "); 
			Deposit(accountValue, d);
			OutputAccount(accountValue); 
			break;
				
		case 'w': //withdraw
		case 'W':
			w = GetValue("Enter an amount to withdraw => "); 
			Withdraw(accountValue, w);
			OutputAccount(accountValue);
			break;

		case 'l': //loan 
		case 'L':
			cout << "How much do you want to borrow? ";
			cin >> borrowed; 
			cout << endl; 

			credit = GetCreditRating();
			interest = GetInterestRating(credit);
			loanMonths = GetLoanMonths();
			total = CalculateLoanAmount(borrowed, interest, loanMonths);

			cout << "Interest Rate : " << interest << endl;
			cout << "Principle : " << borrowed << endl;
			cout << "Months : " << loanMonths << endl;
			cout << "Your total loan amount is " << total << endl;

			break;

		case 'q':
		case 'Q':
			exit(0); //quits function 

		}
	}

	return 0;
}