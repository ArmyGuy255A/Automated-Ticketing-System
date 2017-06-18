// ATSBaseClass.cpp : Defines the base class for the ATS.
//

#include <iostream>
#include <string>
using namespace std;

class baseClass {
public:
	string name;
	//Default Constructor
	baseClass() {}

	//Overloaded constructor
	baseClass(string className) {
		name = className;
		//Since this is private, you can only use it within the class. It's protected.
		privateFunction();
	};

	//All functions in this class are publicised. 
public:
	void publicFunction() {
		
	}


//All of the functions in this class are protected and can only be accessed
//within the class itself.
private:
	void privateFunction() {
		
	}
};