// Jayden Tran 
// jtr7p@mail.umkc.edu
// 2 - 8 - 21
// CS201L Lab 04

#include <iostream>
#include <string>
#include <math.h>
#include <string.h>
using namespace std;

char MainMenu() { 
	char choice;
	cout << "Main Menu ( Enter one of the following ) " << endl;
	cout << "     (D)eposit, (W)ithdrawl, (L)oan, or (Q)uit" << endl;;
	cin >> choice;
	return choice;
	cout << endl; 
}

float GetValue(string str) {
	float j;
	while (1) {
		cout << str;
		cin >> j;
		if (j > 0) {
			break;
		}
		cout << "You must enter an amount greater than 0" << endl;
	}

	return j;
}

float GetValue(string str, float limit) { //overload function 
	float j;
	cin >> j;
	if ((j > 0) && (j > limit)) {
		cout << "You must enter an amount less or equal to " << limit << endl;
	}
	else {
		return j;
	}
}

int GetCreditRating() { //asks for credit 
	int credit;
	while (1) {
		cout << "What is your rating?   [350, 850] ==> "; 
		cin >> credit; 
		cout << endl; 
		if ((credit >= 350) && (credit <= 850)) { //loops back if credit rating isnt valid 
			break;
		}
			cout << "You must choose a value from 350 - 850 inclusive." << endl;
	}
	return credit;
}

float GetInterestRating(int credit) { //interest rate for credit score brackets
	float interest = 0;
	if (credit <= 500) {
		interest = 0.05;
	}

	else if ((credit > 500) && (credit <= 700)) {
		interest = 0.03;
	}

	else {
		interest = 0.01;
	}
	return interest;
}

int GetLoanMonths() { //get months for loan 
	int loanMonths;
	while (1) {
		cout << "How many months for the loan?  12, 24, 36, or 60 ==> ";
		cin >> loanMonths;
		cout << endl; 
		if (loanMonths == 12 || loanMonths == 24 || loanMonths == 36 || loanMonths == 60) { //loops back if input not accepted value
			return loanMonths;
		}
		cout << "You must enter a valid loan length" << endl;
	}
	return loanMonths;
}

float CalculateLoanAmount(float borrowed, float interest, int loanMonths) {
	float total;
	total = borrowed * pow((1 + (interest/12)), (loanMonths/12)); //total loan amount 
	return total;
}

void Deposit(float& account, float amount) { //adds to account 
	account = account + amount;
}

void Withdraw(float& account, float amount) { //subtracts from account 
	account = account - amount;
}

void OutputAccount(float amount) {
	cout << " Summary of account " << endl;
	cout << " Amount : $" << amount << endl;
}