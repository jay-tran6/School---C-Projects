// Jayden Tran
// jtr7p@umsystem.edu
// Lab Week 14
// 4 - 27 - 21
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

//class template 
template <class T>
//add with two parameters
T add(T param1, T param2) {
	//returns the addition of two values
	return param1 + param2;
}


int main()
{
	int fIVal, sIVal;
	double fDVal, sDVal;
	string fsVal, sSVal;
	//user input
	cout << "Part (A)" << endl;
	cout << "Enter first integer number: " << endl;
	cin >> fIVal;
	cout << "Enter second integer number: " << endl;
	cin >> sIVal;

	cout << endl << "Enter first double number: " << endl;
	cin >> fDVal;
	cout << "Enter second double number: " << endl;
	cin >> sDVal;

	cout << endl << "Enter first string: " << endl;
	cin >> fsVal;
	cout << "Enter second string: " << endl;
	cin >> sSVal;

	//calling function with int,double and string values
	cout << endl << "addition of integers = " << add(fIVal, sIVal) << endl;
	cout << "addition of doubles = " << add(fDVal, sDVal) << endl;
	cout << "addition of strings = " << add(fsVal, sSVal);

	return 0;
}

template <class T>
void countFreq(T arr[], int n)
{
	sorting<T, int> mp;

	//going through array elements
	//counting frequencies
	for (int i = 0; i < n; i++)
		mp[arr[i]]++;

	//going through the elements, printing 
	for (auto x : mp)
		cout << x.first << "   =   " << x.second << endl;

	cout << "Part  (B)" << endl;
	//integer array
	int intArray[20];
	ifstream intfile("integers.txt");
	for (int i = 0; i < 20; i++)
	{
		intfile >> intArray[i];
	}
	cout << "Integers  ==  count" << endl;
	countFreq(intArray, 20);
	cout << endl;
	cout << endl;

	//double array
	double dobArray[20];
	ifstream doublefile("doubles.txt");
	for (int i = 0; i < 20; i++)
	{
		doublefile >> dobArray[i];
	}
	cout << "Double  ==  count" << endl;
	countFreq(dobArray, 20);
	cout << endl;
	cout << endl;

	//string array
	string strArray[20];
	ifstream stringfile("strings.txt");
	for (int i = 0; i < 20; i++)
	{
		stringfile >> strArray[i];
	}
	cout << "String  ==  count" << endl;
	countFreq(strArray, 20);
	return 0;
}