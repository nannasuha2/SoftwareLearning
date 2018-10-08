/*
-in simple cpp file, function can also put before main function.
-Defining multiple loop for(int x =1; x <= n; x++) with same counter variable (eg:x) in a function, 
will only produce one universal loop. So, for separated loops, use different counter variable.
-modulo(%)- to generate rand. num within specific range.
-seedrand, srand()-to generate truly random number by specifying the seed value.
-Function overload can have different variable type for parameters.
-void is ok. Must not return any value.
-Recursive function, calling itself inside the function.
-Factorial, eg: 4! = 4*3*2*1 = 24.
*/


#pragma once
#include<iostream>
#include<cstdlib>//for rand()
#include<ctime>
using namespace std;

//Function declaration
void printSomething();
int addNumbers(int x, int y);
void LoopRandNum(int y);
void LoopSRandNum(int x, int y);
void printName(int a);
void printName(float a);
void printName(int a, int b);
int factorial(int n);
void printArray(int arr[], int size);
void myFunc(int x);

/***************************************************Func. Parameters************************************************/
//Function definition
void printSomething()
{
	cout << "Hi there!" << endl;
}

/****************************************************Func. + Multiple Parameters*************************************/
int addNumbers(int x, int y)
{
	int results = x + y;
	return results;
}

/*****************************************************Rand() Func*****************************************************/
void LoopRandNum(int y)
{
	for (int x = 1; x <= y; x++)
	{
		cout << rand() << endl << endl;
	}

	for (int k = 1; k <= y; k++)
	{
		int a = rand();
		cout << "a = " << a << ", modulo = " << 1 + (a % 6) << endl;
	}
}
		
void LoopSRandNum(int x, int y)
{
	srand(x);
	for(int k = 1; k <= y; k++)
	{
		cout << 1 + (rand() % 6) << endl;
	}
}

/******************************************************Function Overload**************************************************/
void printName(int a)
{
	cout<< a <<endl;
}

void printName(float a)
{
	cout << a << endl;
}

void printName(int a, int b)
{
	cout << a  + b << endl;
}

/*******************************************************Recursion*********************************************************/
//Program for calculating factorial.

int factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}

/*******************************************************Passing Arrays & Functions****************************************/
//Passing array as argument
//Put [] when define an array as a parameter.

void printArray(int arr[], int size)
{
	for (int x = 0; x < size; x++)
	{
		cout << arr[x] << endl;
	}
}

/********************************************************Pass by reference with pointer**********************************/
//two ways passing parameter of a func.
//pass by value-pass the copy of variable as an argument (expensive-usage memory)
//pass by reference-pass the value by address. (actually changed the value of the memory)

void myFunc(int x)
{
	x = 100;
	cout << x << endl;
}

void myFinc2(int *x)
{
	*x = 100;
	cout << x << endl;
}




