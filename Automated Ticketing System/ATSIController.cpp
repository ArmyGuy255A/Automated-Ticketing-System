// ATSIController.cpp : Defines the base class for the ATS.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include "UIMain.h"
#include "ATSDBController.cpp"


using namespace std;

class ATSIController {
public:
	string name;
	//Default Constructor
	ATSIController() {}

	//Overloaded constructor
	ATSIController(string className) {
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