/*
:: -scope resolution operator
here are constructor that have been declared in header file. 
.cpp defines how.
Desctructor cannot receive or return parameter.
*/
#include "MyClass.h"
#include<iostream>
using namespace std;



MyClass::MyClass()
{
	cout << "Constructor" << endl;
}


MyClass::~MyClass()
{
	cout << "Destructor" << endl;
}

void MyClass::myPrint() 
{
	cout << "Hello myPrint." << endl;
}

void MyClass::myPrint2() const
{
	cout << "its a const function" << endl;
}