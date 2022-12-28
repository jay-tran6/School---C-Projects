// Jayden Tran
// jtr7p@umkc.mail.edu
// 3 - 15 - 21
// CS201L Lab 09

#include "LibraryBook.h"
#include "LibraryBook.cpp"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	ifstream finBook("books.txt");
	ifstream finIsbn("isbns.txt");
	ofstream fout("checkedout.txt");
	int numBooks = 0;

	if (!finBook || !finIsbn) {
		cout << "Error opening file" << endl;
		return 1;
	}

	LibraryBook myBook[10]; //array to hold book
	while (finBook.good()) {
		string title;
		string author;
		string isbn;

		getline(finBook, title);
		getline(finBook, author);
		getline(finBook, isbn);

		LibraryBook book(title, author, isbn);
		myBook[numBooks] = book;
		numBooks++;
	}

	while (finIsbn.good()) {
		for (int i = 0; i < numBooks; i++) {
			string isbnList;
			finIsbn >> isbnList;
			if (myBook[numBooks].getIsbn() == isbnList) {
				myBook[numBooks].checkOut(); //status of book to checked out
			}
			else {
				myBook[numBooks].checkIn(); //status of book to checked in
			}
		}
	}

	fout << "Books checked out:" << endl << endl << "--------------";
	fout << endl << endl << endl << "Title   " << "Author   " << "ISBN" << endl << endl;
	for (int j = 0; j <= numBooks; j++) {
		if (myBook[numBooks].isCheckedOut()) {
			fout << myBook[j].getTitle() << '\t' << myBook[j].getAuthor() << '\t' << myBook[j].getIsbn() << endl;
		}
	}
	finBook.close();
	finIsbn.close();
	fout.close();
	return 0;
}