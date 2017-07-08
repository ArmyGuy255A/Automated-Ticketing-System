// ATSVendor.cpp : Defines the base class for the ATS.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class ATSVendor {
public:
	string vendorName;
	int ticketOwner;
	int vendorId;
	string phone;
	string email;
	int availableEvents;
	//Default Constructor
	ATSVendor() {}

	//Overloaded constructor
	ATSVendor(int vID) {
		vendorId = getVendorID(vID);
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
	//Getters
	string getVendorName() {

	}

	int getTicketOwner() {

	}

	int getVendorID(int vID) {

	}

	string getPhone() {

	}

	string getEmail() {

	}

	int getAvailableEvents() {

	}

	//Setters
	string setVendorName() {

	}

	int setTicketOwner() {

	}

	int setVendorID() {

	}

	string setPhone() {

	}

	string setEmail() {

	}

	int setAvailableEvents() {

	}
};