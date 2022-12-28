//Jayden Tran
//Lab 10
//3 - 22 - 21
//Joe Epperson IV

#include<iostream>
#include<fstream>

using namespace std;

void main() {

	//PT I
	cout << "PART I" << endl;
	int * my_var = nullptr;

	cout << my_var << endl; 
	//Prediction: except error thrown 
	//Actual: segmentation fault
	//Notes:no data outputted
	cout << *my_var << endl;
	//Prediction: prints address
	//Actual: prints value of the pointer
	//Notes: pointer prints address of the pointer
	cout << &my_var << endl;
	//Prediction: prints address of pointer
	//Actual: printed address of the pointer
	//Notes: code will print the address

	cout << endl;

	//PT II
	cout << "PART II" << endl;
	my_var = new int (27);
	
	cout << my_var << endl;
	//Prediction: prints the address of the pointer
	//Actual: printed the address of the pointer
	//Notes: the pointer will print the calie stored in the pointer
	cout << *my_var << endl;
	//Prediction: it will print the address of the pointer
	//Actual: printed the address of the pointer
	//Notes: it will print the address 
	cout << &my_var << endl;
	//Prediction: it will print the address of the pointer
	//Actual: printed address of the pointer
	//Notes: it will print the address 

	cout << endl;

	//PT III
	cout << "PART III" << endl;
	int * new_var = new int; 
	int twenty_seven = 27;
	*new_var = twenty_seven;

	cout << new_var << endl;
	//Prediction: 27
	//Actual: printed the address
	//Notes: when printing the pointer it will print the address 
	cout << *new_var << endl;
	//Prediction: 27
	//Actual: 27 
	//Notes: outputs stored int value
	cout << &new_var << endl;
	//Prediction: it will print the address 
	//Actual: prints the address 
	//Notes: when the pointer is printed it will print the address 

	cout << endl;

	//PT IV
	cout << "PART IV" << endl;
	my_var = new_var;

	cout << my_var << endl;
	//Prediction: prints address 
	//Actual: printed address
	//Notes: when pointer is outputted the address will output
	cout << *my_var << endl;
	//Prediction: 27
	//Actual: 27
	//Notes: outputted stored value
	cout << &my_var << endl;
	//Prediction: prints address
	//Actual: printed address
	//Notes: when pointer is outputted the address will the outputted into debug 
	
	cout << endl;

	//PT IV
	//Copy & Paste the following at various output points in your code (x6)

	//Part 1

//my code
	//Part 1
	double* my_var = nullptr;
	cout << *my_var << endl;
	//Your Partner's Prediction:
	//Actual:
	//Notes:

	//Part 2
	my_var = new double(20);
	cout << my_var << endl;
	//Your Partner's Prediction:
	//Actual:
	//Notes:

	//Part 3
	double* my_var = nullptr;
	double* new_var = new double;
	double five = 5;
	*new_var = five
	cout << *new_var << endl;
	//Your Partner's Prediction:
	//Actual:
	//Notes:

	//Part 4
	my_var = new_var;
	cout << &my_var << endl;
	//Your Partner's Prediction:
	//Actual:
	//Notes:
}
//

//Partners code
	cout << "Part V" << endl;
	int* my_var = nullptr;
	my_var = new int;
	int tempVal = 51;
	*my_var = tempVal;

	cout << my_var << endl;
	//Jayden's Prediction: prints address of pointer
	//Actual: printed address of pointer
	//Notes:
	cout << tempVal << endl;
	//Jayden's Prediction: 51
	//Actual: 51
	//Notes:
	cout << &my_var << endl;
	//Jayden's Prediction: outputs address of my_var
	//Actual: printed address of my_var
	//Notes:
	cout << &tempVal << endl;
	//Jayden's Prediction: outputs address of tempVal
	//Actual: outputted address of tempVal
	//Notes: when pointer is printed it will output the address 
}