# Learning C++

## Basic Concept

## Conditionals and Loops

## Data Types, Arrays, Pointers

## Functions

1. In simple .cpp file, function can also put ==before main function==.

2. Defining ==multiple loop== for(int *x* =1; *x* <= n; *x*++) with same counter variable (eg:*x*) in a function, will only produce one **universal loop**. So, for separated loops, use different counter variable.

3. **Modulo(%)**- to generate rand. number within specific range.

4. **Seed random, srand()**-to generate truly random number by specifying the seed value.

5. **Function overload**- can have different variable type for parameters. ***Void*** is OK. Must not return any value.

   ```c++
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
   
   ```

6. **Recursive function**, calling itself inside the function.

7. Eg. of using Recursive function: **Factorial**, eg: 4! = 4*3*2*1 = 24.

## Classes and Objects

#### Intro

- an object - an identity -created using "class"
- an object has characteristics - which holds attributes.
- attributes:  the current state of an object
- an object in OOP consist of identity, attributes (arguments), behaviors/methods (func) class is the blueprint of objects. 
- the objects called "instance" - process creating= instantiation

1. **Declaring a class-use access specifier:**
   -public-can be accessed from outside the class. -can access private attributes/methods.
   -protected - 
   -private - cannot be accessed from outside. (only for inside used). Can access/return private attribute value 
   using public method.

2. **Abstraction** 

   -focus on essential qualities of an object
   -support inheritance and polymorphism

3. **Encapsulation** 

   -data hiding (protected)- hide details that unnecessary to be accessed by the application. 
   -only accessed by the object itself. -called as "black boxing"

4. **Constructors:**
   -default constructor- no parameter passed.
   -other constructor with parameters -

5. **Note:** cannot cout << (a void func.).

## More on Classes

1. a good practice to create an object template (class) -h & cpp.

2. These is in .h file:

   ```c++
   #ifndef MYCLASS_H //set condition if not define yet.
   #define MYCLASS_H //to define class
   #endif //to end condition if.
   ```

3. Create member function of the class

4. **Constant object**

   -***const*** variable eg: 

   ```c++
   const int x = 42; //const var must be initialize at the time of creation.
   ```

   -***const*** obj - after declared as ***const***, cannot make changes to the members even if **public**.
   -***const*** object can only call ***const func***.
   -non-***const*** can call ***non-const func (regular func)*** and also ***const func.***

5. **Friend class**

   -If declare a function or class as a friend, 

   ```c++
   class MyClass
   {
       public:
       	MyClass() {regVar = 0;}
       private:
       	int regVar;
      
       friend void someFunc(MyClass &obj);
   }
   ```

   the function or class **can access** private member.

   -Passing an object to a function required passed by **reference (&)**

   -Notes: a function or a class, can be **declared friend** for **many other classes**.

## Inheritance and Polymorphism

1. Inheritance allows us to define a class based on another class.

2. Base class -> Derived class

3. Demo: Having 2 classes which is "***Mother***" and "***Daughter***". Set "Daughter" as the inheritance class of "***Mother***".  **Public** - means that the "***Daughter***" can access all the public attributes and methods from "***Mother***".

   ```c++
   #include "Mother.h"
   class Daughter : public Mother 
   {
   public:
   	Daughter();
   	~Daughter();
   };
   ```

   To prompt the output, remember to include only Daughter class:

   ```c++
   #include<iostream>
   #include"Daughter.h"
   using namespace std;
   
   int main()
   {
       Daughter d;
   	d.sayHi();
   	return 0;
   }
   ```

4.  Derived class **cannot** access these things from Base class:

   - Constructors, destructor
   - Overload operator
   - Friend function

5. A  Derived class an be an instance of **many Bases**. Eg:-

   ```c++
   class Daughter : public Mother, public Farther
   ```

   ### Protected Members

   Derived class can only access **public** attributes/methods of Bases class. 

   **Protected** -can only accessed by ==Derived class== and it's own class.

   ### Type of Inheritance

   ```c++
   class Daughter: public Mother
   ```

   **public**- can access both 