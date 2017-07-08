// ATSSystem.cpp : Defines the base class for the ATS.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include "ATSDBController.cpp"
#include "ATSTimer.cpp"


using namespace std;

enum notificationType {
	Warning,
	Error,
	Informational
};

class ATSSystem {
public:
	ATSTicket *ticket;
	ATSTimer *timer;

	//Default Constructor
	ATSSystem() {}

	//Overloaded constructor
	ATSSystem(string className) {
		//Since this is private, you can only use it within the class. It's protected.
		//privateFunction();
	};

	//All functions in this class are publicised. 
public:
	void publicFunction() {
		
	}


//All of the functions in this class are protected and can only be accessed
//within the class itself.
private:
	void printTicket(ATSTicket *ticket) {
		
	}

	void shutdownSystem() {

	}

	void startupSystem() {

	}

	void sendWarningNotification(notificationType nType, string message) {

	}

	int promptCustomer(notificationType nType, string message) {

	}

	ATSCustomer *customerLogin() {

	}

	void customerLogout() {

	}
};