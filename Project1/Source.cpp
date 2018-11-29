#include "library.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

	Library RowanLibrary = Library("100 Mullica Hill Rd", "Rowan Library", "233-213-2342");

	cout << RowanLibrary.getname() << endl;
	cout << RowanLibrary.getaddress() << endl;
	cout << RowanLibrary.getphoneNumber() << endl;

system("pause");

}
