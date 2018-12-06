#include "Library.h"
#include <iostream>
#include <string>

// Jackie Giordano
// Jeremy Goenaga
// Peter Wilenta
// Cyril Harvey

using namespace std;


int main()
{
	string genre;
	string name, address, phone;
	int days, i = 0;
	int x = 50, y = 2;

	Library RowanLibrary = Library("100 Mullica Hill Rd", "Rowan Library", "233-213-2342");

	cout << "WELCOME TO THE LIBRARY APP" << endl;
	cout << "What Would You Like To Do?" << endl;

	do {

		cout << "------------------------------" << endl;
		cout << "1 - Get Library Info" << endl;
		cout << "2 - Change Library Info" << endl;
		cout << "3 - Show Book List" << endl;
		cout << "4 - Show Employee List" << endl;
		cout << "5 - Show Customer List" << endl;
		cout << "6 - Some Enums" << endl;
		cout << "7 - Get Late Fee's Using Recursion" << endl;
		cout << "8 - Pass By Reference" << endl;
		cout << "9 - Pass By Value" << endl;
		cout << "0 - EXIT" << endl;
		cout << "------------------------------" << endl;

		cin >> i;

		if (i == 1) {
			cout << RowanLibrary.getname() << endl;
			cout << RowanLibrary.getaddress() << endl;
			cout << RowanLibrary.getphoneNumber() << endl;
		}
		else if (i == 2) {
			cin.ignore(1000, '\n');

			cout << "Enter A Name : ";
			getline(cin, name);
			RowanLibrary.setname(name);

			cout << "Enter A Address : ";
			getline(cin, address);
			RowanLibrary.setaddress(address);

			cout << "Enter A Phone Number : ";
			getline(cin, phone);
			RowanLibrary.setphoneNumber(phone);
		}
		else if (i == 3) {
			RowanLibrary.BookList();
		}
		else if (i == 4) {
			RowanLibrary.EmployeeList();
		}
		else if (i == 5) {
			RowanLibrary.CustomerList();
		}
		else if (i == 6) {
			// using enums
			cout << "Enums, Select A Genre and it will tell you the location " << endl;
			cout << "What Genre Are You Looking For ? " << endl;
			cin >> genre;

			if (genre == "Horror" || genre == "horror" || genre == "HORROR") {
				cout << "Aisle  : " << RowanLibrary.EnumExample(Horror) << endl;
			}
			else if (genre == "SciFi" || genre == "scifi" || genre == "SCIFI") {
				cout << "Aisle  : " << RowanLibrary.EnumExample(SciFi) << endl;
			}
			else if (genre == "Historical" || genre == "historical" || genre == "HISTORICAL") {
				cout << "Aisle  : " << RowanLibrary.EnumExample(Historical) << endl;
			}
			else if (genre == "Fiction" || genre == "fiction" || genre == "FICTION") {
				cout << "Aisle  : " << RowanLibrary.EnumExample(Fiction) << endl;
			}
			else if (genre == "NonFiction" || genre == "nonfiction" || genre == "NONFICTION") {
				cout << "Aisle  : " << RowanLibrary.EnumExample(NonFiction) << endl;
			}
			else if (genre == "Poetry" || genre == "poetry" || genre == "POETRY") {
				cout << "Aisle  : " << RowanLibrary.EnumExample(Poetry) << endl;
			}

		}
		else if (i == 7) {
			// recursive function call
			cout << "Recursion Example : " << endl;
			cout << "How Many Days is the Book Late ?  " << endl;
			cin >> days;
			cout << "Your Late Fee Is :  $ " << RowanLibrary.LateFeeRecursive(days) << endl;
		}
		else if (i == 8) {
			// pass by reference

		// before
			cout << "before : " << endl;
			cout << "x = " << x << endl;
			cout << "y = " << y << endl;

			RowanLibrary.PassByReference(x, y);

			// after
			cout << "after : " << endl;
			cout << "x = " << x << endl;
			cout << "y = " << y << endl;
		}
		else if (i == 9) {
			// pass by value
			
			// before
			cout << "before : " << endl;
			cout << "x = " << x << endl;
			cout << "y = " << y << endl;

			RowanLibrary.PassByValue(x, y);

			// after
			cout << "after : " << endl;
			cout << "x = " << x << endl;
			cout << "y = " << y << endl;

		}


	} while (i > 0 && i < 10);

	cout << "GOODBYE" << endl;



system("pause");

}
