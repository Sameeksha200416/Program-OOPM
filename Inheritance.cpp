//Q1)Inheritance
#include<iostream> 

using namespace std; 
class Base1 { 
public: 
	Base1() 
	{ cout << " Base1's constructor called" << endl; } 
}; 

class Base2 { 
public: 
	Base2() 
	{ cout << "Base2's constructor called" << endl; } 
}; 

class Derived: public Base1, public Base2 { 
public: 
	Derived() 
	{ cout << "Derived's constructor called" << endl; } 
}; 

int main() 
{ 
Derived d; 
return 0; 
} 
//Q2)----------------||------------------------
#include <iostream> 
using namespace std; 

class Base1 { 
public: 
	~Base1() { cout << " Base1's destructor" << endl; } 
}; 
	
class Base2 { 
public: 
	~Base2() { cout << " Base2's destructor" << endl; } 
}; 
	
class Derived: public Base1, public Base2 { 
public: 
	~Derived() { cout << " Derived's destructor" << endl; } 
}; 
	
int main() 
{ 
Derived d; 
return 0; 
} 
