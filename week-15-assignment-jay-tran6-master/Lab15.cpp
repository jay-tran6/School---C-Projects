// Jayden Tran
// jtr7p@umsystem.edu
// Lab Week 15
// 5 - 4 - 21
#include <fstream>
#include <iostream>
#include <list>
#include <string>
using namespace std;


void fillList(list<char>& charlist, string stringadd) {
	string::iterator strItr = stringadd.begin();
	for (strItr; strItr != stringadd.end(); strItr++) {
		char charinst = *strItr;
		charlist.push_back(charinst);
	}
}

//printing all characters in list
void printList(list<char> charlist, ostream& out) {
	list<char>::iterator charItr = charlist.begin();
	if (charlist.size() == 0) {
		out << 0;
	}
	else {
		for (charItr; charItr != charlist.end(); charItr++) {
			out << "[" << *charItr << "] -> ";
		}
		out << "0";
	}
}

//removing characters passed from the list passed
void removeCharacter(list<char>& charlist, char rmchar) {
	list<char>::iterator charItr = charlist.begin();
	if (!(charlist.size() == 0)) {
		for (charItr; charItr != charlist.end(); charItr++) {
			if (*charItr == rmchar) {
				charlist.erase(charItr);
				if (charlist.size() == 0) {
					break;
				}
				charItr = charlist.begin();
			}
		}
	}
}


int main() {
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	string input;
	string vowels = "aeiouAEIOU";
	while (fin.eof() != true) {
		getline(fin, input);
		if (input == "END") {
			break;
		}
		list<char> charlist; //creates list with each string passed, removes all vowels from the strings
		string::iterator strItr = vowels.begin();
		fillList(charlist, input);
		for (strItr; strItr != vowels.end(); strItr++) {
			removeCharacter(charlist, *strItr);
		}
		printList(charlist, fout);
		fout << endl;
		fout << endl;
	}
	return 0;
}

