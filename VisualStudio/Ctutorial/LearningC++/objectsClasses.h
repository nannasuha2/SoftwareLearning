#pragma once
#include<iostream>
#include<string>

class BankAccount 
{
public:
	void sayHi() 
	{
		cout << "Hi" << endl;
	}
};

class myClass
{
public:
	myClass()
	{
		cout << "Hey";
	}
	myClass(string nm)
	{
		setName(nm);
	}
	void setName(string x)
	{
		name = x;
	}
	string getName()
	{
		return name;
	}
private:
	string name;
};
