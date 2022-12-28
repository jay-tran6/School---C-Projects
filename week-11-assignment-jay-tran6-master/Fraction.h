#pragma once
// jayden tran 
// 4 - 5 - 21
// Lab 11

#include <iostream>
using namespace std;

class Fraction
{

	// Add the variables and functions you need to. getGCD and reduce are 
	// provided for you.

private:
	int getGCD(int num1, int num2);

public:
	void reduce();



};

public:
	void reduce();
	Fraction();
	const Fraction operator+(Fraction rhs);
	const Fraction operator-(Fraction rhs);
	const Fraction operator*(Fraction rhs);
	const Fraction operator/(Fraction rhs);
	bool operator==(Fraction rhs);
	friend ostream& operator<<(ostream& output, const Fraction& frac);
	friend istream& operator>>(istream& input, Fraction& frac);
}