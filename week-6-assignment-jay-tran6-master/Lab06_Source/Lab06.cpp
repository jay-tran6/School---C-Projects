// Jayden Tran
// jtr7p@mail.umkc.edu
// 2 - 22 - 21
// CS201L Lab 06

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

struct SetOfPoints {
	double x1, y1, z1, x2, y2, z2, distanceBetween;

	SetOfPoints(double x1, double y1, double z1, double x2, double y2, double z2, double distanceBetween) {
		this->x1 = x1;
		this->y1 = y1;
		this->z1 = z1;
		this->x2 = x2;
		this->y2 = y2;
		this->z2 = z2;
		this->distanceBetween = distanceBetween;
	}
};

double calcDistance(int x1, int y1, int z1, int x2, int y2, int z2) {
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
}

bool comparator(SetOfPoints& s1, SetOfPoints& s2) {
	return s1.distanceBetween < s2.distanceBetween;
}

void readInput(string fileName, vector<SetOfPoints>& arr) {
	fstream fin;
	double x1, y1, z1, x2, y2, z2;

	fin.open(fileName); // open the input file
	while (!fin.eof()) {
		fin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2; 
		double distanceBetween = calcDistance(x1, y1, z1, x2, y2, z2);
		SetOfPoints newSetOfPoints = SetOfPoints(x1, y1, z1, x2, y2, z2, distanceBetween);
		arr.push_back(newSetOfPoints);
	}
	fin.close(); // closing input file
}

void writeOutput(string fileName, vector<SetOfPoints>& arr) {
	ofstream fout;
	int arrLen = arr.size(); 
	fout.open(fileName); // open the output file.
	for (int i = 0; i < arrLen; i++) {
		fout << arr[i].distanceBetween << endl; 
	}
	fout.close(); // close the output file
}

int main()
{
	string inputFileName = "input.txt";
	string outputFileName = "output.txt";
	string sortedOutputFileName = "output_sorted.txt";
	vector<SetOfPoints> arr;
	readInput(inputFileName, arr); // read input and push it into 'arr'.

	int arrLen = arr.size();

	writeOutput(outputFileName, arr); 

	// Sorting the calculated distances.
	sort(arr.begin(), arr.end(), comparator);

	// Writing the output (sorted)
	writeOutput(sortedOutputFileName, arr);
	return 0;
}