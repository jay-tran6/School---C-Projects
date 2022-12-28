#pragma once
#define LIBRARYBOOK_H

#include<string>
using namespace std;

class LibraryBook {
private:
	string title;
	string author;
	string isbn;
	bool checkedOut;
public:
	LibraryBook();
	LibraryBook(string, string, string);
	string getTitle();
	string getAuthor();
	string getIsbn();
	void checkIn();
	void checkOut();
	bool isCheckedOut();

};
