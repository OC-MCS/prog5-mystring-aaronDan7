//==================================
// Aaron Hill
// program 5 mystring
// 3/5/19
//====================================
#include <iostream>
#include <iomanip>
#include <cstring>
#include <ostream>
#include "MyString.h"

using namespace std;

int main()
{
	MyString s1("hello");
	MyString s2("world");
	MyString s3 = s1;
	MyString s4;
	s4 = s3 + s2; 

	cout << s1 << endl << s2 << endl << s3 << endl << s4 << endl;
	MyString testequal = "bobby";
	cout << testequal;
	MyString comp = "bobby";
	
	if (comp == testequal)
	{
		cout << "these are the same";
	}




	return 0;
}