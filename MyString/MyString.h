#pragma once
#ifndef MyString_h
#define MyString_h

#include <cstring>
#include <iomanip>
#include <iostream>
#include <ostream>
// MyString class declaration goes here

//#include "MyString.cpp"
// added const to passed variables to please compiler

// stick const on everything

class MyString
{
private:
	char *ptr;
public:
	// constructors
	MyString();
	MyString(const char*);
	// destructor
	~MyString();
	
	MyString(const MyString &other);
	
	MyString operator=(const MyString &other);
	MyString operator+(const MyString &other);
	char *getc_str() const;
	bool operator == (const MyString &other);

};

ostream & operator << (ostream &out, MyString &other);

#endif // !MyString_h

