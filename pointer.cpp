#include <iostream>

using namespace std;

int Pointer() 
{
	int var = 20;
	int *ip;

	ip = &var;
	cout << var << endl;
	cout << ip << endl;
	cout << *ip << endl;

	return 0;
}