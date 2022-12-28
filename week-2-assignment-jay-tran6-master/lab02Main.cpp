// Jayden Tran 
// jtr7p@mail.umkc.edu
// 1 - 31 - 21
// CS201L Lab 02

#include<iostream>
#include<string>
using namespace std;

int main() {

	string name;
	float homeworkScore;
	float testScore;
	float quizScore;
	float attendanceScore;
	double finalScore; 


	cout << "Please enter the students name >>> ";
	cin >> name;
	cout << endl;

	cout << "Please enter the homework score >>> ";
	cin >> homeworkScore;
	cout << endl; 

	cout << "Please enter you test score >>> ";
	cin >> testScore;
	cout << endl; 

	cout << "Pleaser enter the quiz score >>> ";
	cin >> quizScore;
	cout << endl;

	cout << "Please enter the attendance score >>> ";
	cin >> attendanceScore;
	cout << endl << endl;


	finalScore = (homeworkScore * 20) + (testScore * 50) + (quizScore * 20) + (attendanceScore * 10);
	// total weights for final score : (20 + 50 + 20 + 10 = 100)
	finalScore = finalScore / 100;

	
	cout << "Grades for " << name << endl;
	cout << "   Homework   : " << homeworkScore << endl;
	cout << "   Test       : " << testScore << endl;
	cout << "   Quizz      : " << quizScore << endl;
	cout << "   Attendance : " << homeworkScore << endl;
	cout << "============================" << endl;
	cout << "   Total score : " << round(finalScore) << endl;

	return 0;

}
