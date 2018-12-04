#include "Library.h"
#include <iostream>
#include <string>

// Jackie Giordano
// Jeremy Goenaga
// Peter Wilenta
// Cyril Harvey

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

void Library::setaddress(string a)
{
	address = a;
}

void Library::setphoneNumber(string n)
{
	name = n;
}

void Library::setname(string p)
{
	phone_number = p;
}


void Library::BookList()
{
	string books[5][3]{

		{ "Harry Potter", "Author", "Sci_Fi" },
		{ "C++ For Dummies", "Author", "Non Fiction" },
		{ "Angels & Demons", "Author", "Sci_Fi" },
		{ "The Bible", "Author", "Historical" },
		{ "Poetry For Dummies", "Author", "Fiction" },
	
	};

	for (int i = 0; i < 5; i++) {
	
		for (int x = 0; x < 3; x++) {
			cout << books[i][x] << "  ";
		}

		cout << " " << endl;
	}

}

int Library::EnumExample(Genre genre)
{

	//enum Genre { SciFi, Horror, Fiction, NonFiction, Historical, Poetry };

	//Genre genre = g;

	int aisle = 0;

	if (genre == SciFi)
		aisle = 1;
	else if (genre == Horror)
		aisle = 2;
	else if (genre == NonFiction)
		aisle = 3;
	else if (genre == Historical)
		aisle = 4;
	else if (genre == Poetry)
		aisle = 5;
	else if (genre == Fiction)
		aisle = 6;
	else
		aisle = 0;

	return aisle;
}

void Library::PassByReference(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;

}

void Library::PassByValue(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;

}

float Library::LateFeeRecursive(int days) {

	float total = 0;

	if (days > 0)
	{
		return total + LateFeeRecursive(days - 1) + 1.75;
	}
	else
	{
		return 0;
	}
}


Library::~Library()
{
}
