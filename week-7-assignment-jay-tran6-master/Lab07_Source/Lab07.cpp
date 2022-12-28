// Jayden Tran
// jtr7p@mail.umkc.edu
// 3 - 2 - 21
// CS201L Lab 07

#include <iostream>
#include <vector>
#include <stdexcept>
#include <math.h>
using namespace std;

vector<double> miles;
vector<double> gallons;

double GetMiles() {
	double mile;
	cout << "Enter Miles: "; // input for miles 
	cin >> mile; 
	//stream error
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits < streamsize > ::max(), '\n');
		cout << "There was an error" << endl;
		throw runtime_error("Invalid input received, you must enter a decimal number.");
	}
	// throws error if input is 0, less than 0 
	else {
		if (mile <= 0) {
			throw runtime_error("Miles cannot be less than 0");
		}
		else {
			return mile;
		}
	}
}


double GetGallons() {
	double gallon;
	cout << "Enter Gallons: "; // input for gallons 
	cin >> gallon;
	//stream error 
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits < streamsize > ::max(), '\n');
		cout << "There was an error" << endl;
		throw runtime_error("Invalid input received, you must enter a decimal number.");
	}
	// throws error if input is 0, less than 0
	else {
		if (gallon <= 0) {
			throw runtime_error("Gallons cannot be less than 0");
		}
		else {
			return gallon;
		}
	}
}


double GetMPG(vector<double> miles, vector<double> gallons) {
	double tot_miles = 0, tot_gallons = 0;
	if (miles.size() == 0 || gallons.size() == 0) { //if inputs are zero, throws error when calculating mpg
		throw runtime_error("No values recorded MPG is nan");
	}
	else {
		for (int i = 0; i < miles.size(); i++) {
			tot_miles = miles[i]; //adding user input of miles 
		}
		for (int i = 0; i < gallons.size(); i++) {
			tot_gallons = gallons[i]; //adding user input of gallons 
		}
	}
	// returns calculated mpg (miles/gallons) 
	return (tot_miles / tot_gallons); 
}


int main() {
	double j; 
	char ans;
	while (true) {
		try {
			j = GetMiles();
			if (j > 0) {
				miles.push_back(j);
			}
			j = GetGallons();
			if (j > 0) {
				gallons.push_back(j);

			}
			j = GetMPG(miles, gallons); //calling function to output mpg 
			cout << endl << "Miles Per Gallon is " << j << endl; //final output 
		}
		catch (runtime_error &excpt) {
			cout << excpt.what() << endl;
		}
		//asking if wanting to run program again  
		cout << "Want to enter another trip? y/n : ";
		cin >> ans;
		if (ans == 'n' || ans == 'N') {
			break;
		}
		cout << endl;

	}
	return 0; 
}
