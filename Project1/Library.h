#pragma once
#include <iostream>
#include <string>
using namespace std;
class Library
{
public:

	Library (string address, string name, string customers, string phone_number, string librarians, string books);
	string getaddress();
	string getphoneNumber();
	string getlibrarians();
	string getbooks();
	string getname();
	string getaddress();

	void checkOut();
	void checkIn();
	void searchBook();

	~Library();

private:
	
	string name;
	string address;
	string phone_number;

};

