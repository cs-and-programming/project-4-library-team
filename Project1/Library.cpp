#include "Library.h"
#include <iostream>
#include <string>

using namespace std;


Library::Library(string a, string n, string p) {

	address = a;
	name = n;
	phone_number = p;

}

string Library::getaddress()
{
	return address;
}

string Library::getphoneNumber()
{
	return name;
}

string Library::getname()
{
	return phone_number;
}

string[] Library::getBooks()
{
	string books[5][3] {
	"Harry Potter", "Author", "Sci_Fi",														
	"Harry Potter", "Author", "Sci_Fi",
	"Harry Potter", "Author", "Sci_Fi",
	"Harry Potter", "Author", "Sci_Fi",
	"Harry Potter", "Author", "Sci_Fi"
	} = new books

	return books[5][3];
}

Library::~Library()
{
}
