#pragma once

#include <iostream>
#include <string>

using namespace std;

class Library

{

public:

	Library(string address, string name, string phone_number);
	string getaddress();
	string getphoneNumber();
	string getname();
	string[] getBooks();

	~Library();

private:
	string name;
	string address;
	string phone_number;

};

