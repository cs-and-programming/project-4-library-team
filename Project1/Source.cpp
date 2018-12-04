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
	int days;
	int x = 50, y = 2;

	Library RowanLibrary = Library("100 Mullica Hill Rd", "Rowan Library", "233-213-2342");

	cout << RowanLibrary.getname() << endl;
	cout << RowanLibrary.getaddress() << endl;
	cout << RowanLibrary.getphoneNumber() << endl;

	RowanLibrary.setname("Rutgers Library");
	RowanLibrary.setaddress("New Brunswick, NJ");
	RowanLibrary.setphoneNumber("732-444-5555");

	cout << RowanLibrary.getname() << endl;
	cout << RowanLibrary.getaddress() << endl;
	cout << RowanLibrary.getphoneNumber() << endl;


	// shows list of books
	cout << "Books At : " << RowanLibrary.getname() << endl;

	RowanLibrary.BookList();

	// enums
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


	// recursive funciton call
	cout << "How Many Days is the Book Late ?  " << endl;
	cin >> days;
	cout << "Your Late Fee Is :  $ " << RowanLibrary.LateFeeRecursive(days) << endl;


	// pass by reference

	// before
	cout << "x = " <<  x << endl;
	cout << "y = " <<  y << endl;

	RowanLibrary.PassByReference(x, y);

	// after
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;


	// before
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	RowanLibrary.PassByValue(x, y);

	// after
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;




system("pause");

}
