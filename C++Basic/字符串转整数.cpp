#include <iostream>
#include <string>

using namespace std;

int StrToInt(char* string)
{
	int number = 0;
	while (*string != 0)
	{
		number = number * 10 + *string - '0';
		++string;
	}
	cout << number << endl;
	return 0;
}



int main()
{
	char  str[4] = { '1', '0', '0', '\0'}; 
	StrToInt(str);
	return 0;
}