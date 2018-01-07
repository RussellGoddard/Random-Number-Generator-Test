#include <iostream>
#include <climits>
#include "GetRandom.h"

using std::cout;
using std::endl;



int main() {

	cout << "Numbers should be different every time this program is run" << endl << endl;

	cout << "Test: 0-9" << endl;
	//test 50 random numbers 0-9
	for (int i = 0; i < 49; ++i) {
		int a = INT_MIN;

		a = GetRandom(0, 9);

		cout << a << ' ';
	}

	cout << "\n\n" << "Test: 0-99" << endl;
	//test 50 random numbers 0-99
	for (int i = 0; i < 49; ++i) {
		int a = INT_MIN;

		a = GetRandom(0, 99);

		cout << a << ' ';
	}

	//test 50 random numbers 0-999
	cout << "\n\n" << "Test: 0-999" << endl;
	for (int i = 0; i < 49; ++i) {
		int a = INT_MIN;

		a = GetRandom(0, 999);

		cout << a << ' ';
	}

	//test 50 random numbers 25-27
	cout << "\n\n" << "Test: 25-27" << endl;
	for (int i = 0; i < 49; ++i) {
		int a = INT_MIN;

		a = GetRandom(25, 27);

		cout << a << ' ';
	}

	//test 50 random numbers -25-25
	cout << "\n\n" << "Test: -25-25" << endl;
	for (int i = 0; i < 49; ++i) {
		int a = INT_MIN;

		a = GetRandom(-25, 25);

		cout << a << ' ';
	}


	//test 50 random numbers 50-23 purposely wrong
	//modified to throw an invalid_arguement exception if this case happens
	try {
		cout << "\n\n" << "Test: 50-23" << endl;
		for (int i = 0; i < 49; ++i) {
			int a = INT_MIN;

			a = GetRandom(50, 23);

			cout << a << ' ';
		}
	} 
	catch (std::invalid_argument e) {
		cout << e.what() << endl;
	}

	//test 10 random numbers INT_MIN-INT_MAX
	cout << "\n\n" << "Test: INT_MIN-INT_MAX" << endl;
	for (int i = 0; i < 9; ++i) {
		int a = INT_MIN;

		a = GetRandom(INT_MIN, INT_MAX);

		cout << a << ' ';
	}

	cout << endl;
	system("pause");
	return 0;
}