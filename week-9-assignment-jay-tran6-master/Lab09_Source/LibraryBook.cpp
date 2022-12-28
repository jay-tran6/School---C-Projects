#include "LibraryBook.h"
#include <string>
using namespace std;

LibraryBook::LibraryBook() {
	title = "";
	author = "";
	isbn = "";
	checkedOut = false;
}

LibraryBook::LibraryBook(string titleParam, string authorParam, string isbnParam) { //overload constructor
	title = titleParam;
	author = authorParam;
	isbn = isbnParam;
}

string LibraryBook::getTitle() { //book title
	return title;
}

string LibraryBook::getAuthor() { //author
	return author;
}

string LibraryBook::getIsbn() { //isbn num
	return isbn;
}

void LibraryBook::checkOut() { //status to check out
	checkedOut = true;
}

void LibraryBook::checkIn() { //status to check in
	checkedOut = false;
}

bool LibraryBook::isCheckedOut() { //end status of book
	return checkedOut;
}
