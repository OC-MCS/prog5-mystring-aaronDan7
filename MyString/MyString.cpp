// MyString implementation file
#include "MyString.h"

#include <iostream>
#include<iomanip>
#include <cstring>
#include <ostream>

using namespace std;

// every cstring func gets +1 for nullbyte

// default constructor initializes to whitespace
MyString::MyString()
{
	ptr = nullptr;
}

//constructor 
MyString::MyString(const char* s)
{
	int size = strlen(s) + 1;
	ptr = new char[size];
	strcpy_s(ptr, size, s);
}

// deletes the mystring from mem
MyString::~MyString()
{
//	cout << "delete works" << endl;
	delete[] ptr;
}

// copy constructor takes a mystring and copies into another
MyString::MyString(const MyString &other)
{
	cout << "copy works" << endl;
	ptr = new char(strlen(other.ptr) + 1);
	strcpy_s(ptr, strlen((other.ptr) + 1), (other.ptr));
}

// + operator for adding mystrings / strcat
MyString MyString::operator+(const MyString &other)
{
	MyString temp;
	int tempsize = strlen(ptr) + strlen(other.ptr) + 1;
	temp.ptr = new char[tempsize];

	strcpy_s(temp.ptr, tempsize, ptr);
	strcat_s(temp.ptr, tempsize, other.ptr);

	return temp;
}

// = operator for assign another mystring
MyString MyString::operator=(const MyString &other)
{
	if (this != &other)
	{
		delete[] ptr;
		int newsize = strlen(other.ptr) + 1;
		ptr = new char[newsize];
		strcpy_s(ptr, newsize, other.ptr);
	}
	return *this;
}

// == is easier compare than strcmp
bool MyString::operator==(const MyString &other)
{
	bool valid;
	if (strcmp(ptr, other.ptr) == 0)
	{
		valid = true;
	}
	else
	{
		valid = false;
	}
	return valid;
}

// outstream operator means easy display
// function is broken
ostream & operator << (ostream &out, const MyString &other)
	{
	out << other.getc_str();
	return out;
	}


// getter gets cstring
char* MyString::getc_str() const
{
	return ptr;
}