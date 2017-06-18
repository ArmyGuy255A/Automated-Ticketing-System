// ATSDBController.cpp : Defines the base class for the ATS.
//

#include <iostream>
#include <string>
#include "ATSCustomer.cpp"
#include "ATSTicket.cpp"
#include "ATSVendor.cpp"
#include "ATSEvent.cpp"

using namespace std;

class ATSDBController {
public:
	string name;
	//Default Constructor
	ATSDBController() {}

	//Overloaded constructor
	ATSDBController(string className) {
		name = className;
		//Since this is private, you can only use it within the class. It's protected.
		//openConnection();
	};

	//All functions in this class are publicised. 
public:
	void publicFunction() {
		
	}


//All of the functions in this class are protected and can only be accessed
//within the class itself.
private:
	void openConnection() {
		
	}

	void closeConnection() {

	}

	//Getters
	ATSCustomer *getCustomer() {

	}

	ATSVendor *getVendor() {

	}

	ATSEvent *getEvent() {

	}

	ATSTicket *getTicket() {

	}

	//Setters
	ATSCustomer *setCustomer() {

	}

	ATSVendor *setVendor() {

	}

	ATSEvent *setEvent() {

	}

	ATSTicket *setTicket() {

	}
};