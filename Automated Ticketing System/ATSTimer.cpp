// ATSATSTimer.cpp : Defines the base class for the ATS.
//
#include "stdafx.h"
#include <iostream>
#include <string>

/* Version Control Table
Date		Time		LastName	ChangeDescription
08JUL17		1700CET		DIEPPA		Added Precompiled Header

*/

using namespace std;

class ATSTimer {
public:
	int duration;
	//Default Constructor
	ATSTimer() {}

	//Overloaded constructor
	ATSTimer(int seconds) {
		//Since this is private, you can only use it within the class. It's protected.
		setDuration(seconds);
	};

	//All functions in this class are publicised. 
public:
	void publicFunction() {
		
	}


//All of the functions in this class are protected and can only be accessed
//within the class itself.
private:
	void start() {
		
	}

	void stop() {

	}

	void restart() {

	}

	void setDuration(int seconds) {

	}

	int getDuration(int seconds) {

	}
};