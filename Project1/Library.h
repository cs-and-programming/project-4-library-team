#pragma once

#include <iostream>
#include <string>

// Jackie Giordano
// Jeremy Goenaga
// Peter Wilenta
// Cyril Harvey

using namespace std;
enum Genre { SciFi, Horror, Fiction, NonFiction, Historical, Poetry };

class Library

{

public:

	Library(string address, string name, string phone_number);
	string getaddress();
	string getphoneNumber();
	string getname();
	void setaddress(string);
	void setphoneNumber(string);
	void setname(string);
	void BookList();
	void CustomerList();
	void EmployeeList();
	int EnumExample(Genre);
	void PassByReference(int &x, int &y);
	void PassByValue(int x, int y);
	double LateFeeRecursive(int n);
	~Library();

private:
	string name;
	string address;
	string phone_number;

};

