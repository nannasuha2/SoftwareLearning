#include<iostream>
#include"functions.h"
#include"objectsClasses.h"
#include"MyClass.h"
#include"Daughter.h"
using namespace std;

int main()
{
	int b = 12;
	float c = 8.5;
	int myArr[3] = { 12, 23, 41 };

	/*functions outputs*/
	/*printSomething();
	cout << endl;
	cout << addNumbers(35, 5) << endl;
	cout << endl;
	LoopRandNum(5);
	cout << endl;
	LoopSRandNum(7, 5); 
	cout << endl;
	printName(b);
	cout << endl;
	printName(c); //cannot do printName(8.5). dont know why.. May be due oveload functions.
	cout << endl;
	printName(b, 7);
	cout << endl;
	cout << factorial(6) << endl;
	cout << endl;
	printArray(myArr, 3);
	myFunc(b);
	cout << b << endl;*/

	/*objectsClasses outputs*/
	BankAccount Ana;
	Ana.sayHi();
	myClass alRazi; 
	alRazi.setName("John");
	cout << alRazi.getName() << endl;
	myClass alFarabi("Andrew"); 
	MyClass obj;
	obj.myPrint(); //using "." for accessing a member of the object.
	MyClass *ptr = &obj; // decelare a pointer to the object.
	ptr->myPrint(); //the pointer accessing the member of the object using "->"
	const MyClass obj2;
	//obj2.myPrint2; //access a const function only.

	/*Inheritance and Polymorphism*/
	Daughter d;
	d.sayHi();
	return 0;
}
