#include <iostream>
#include <Windows.h>
using namespace std;

int cd_main() {
	cout << "Size of char : " << sizeof(char) << endl;				//Size of char : 1
	cout << "Size of int : " << sizeof(int) << endl;				//Size of int : 4
	cout << "Size of short int : " << sizeof(short int) << endl;	//Size of short int : 2
	cout << "Size of long int : " << sizeof(long int) << endl;		//Size of long int : 4
	cout << "Size of float : " << sizeof(float) << endl;			//Size of float : 4
	cout << "Size of double : " << sizeof(double) << endl;			//Size of double : 8
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;		//Size of wchar_t : 2
	Sleep(10000);

	return 0;
}