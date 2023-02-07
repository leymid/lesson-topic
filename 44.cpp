#include <iostream>
using namespace std;

int main()
{
	int choice;
	cout << "sprafka po temam\n\n";
	cout << "1. for\n";
	cout << "2. if\n";
	cout << "3. switch\n\n";

	cout << "vvidite nomer temi 1-3:";
	cin >> choice;
	cout << "\n";
	switch (choice) {
	case 1:
			cout << "for - eto samiy universalniy sikl v c++.\n";
			break;
		case 2:
				cout << "if - eto instruksiya uslovnogo vetvenleya.\n";
				break;
			case 3:
				cout << "switch - eto instruksiya mnogonapravlennogo vetvelenya.\n";
					break;
			default:
				cout << "vi doljni vvesti chislo ot 1 do 3. \n";
	}
	return 0;
}