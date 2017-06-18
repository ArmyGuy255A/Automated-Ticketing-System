// ATSTicket.cpp : Defines the base class for the ATS.
//

#include <iostream>
#include <string>
using namespace std;

class ATSTicket {
public:
	int ticketId;
	int ticketOwner;
	int eventInfo;
	int amount;
	bool ticketUsed;

	//Default Constructor
	ATSTicket() {}

	//Overloaded constructor
	ATSTicket(int tID) {
		ticketId = getTicketId(tID);
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
	int getTicketId(int tID) {

	}

	int getTicketOwner() {

	}

	int getEventInfo() {

	}

	int getAmount() {

	}

	bool getTicketUsed(){

	}

	//Setters
	int setTicketId() {

	}

	int setTicketOwner() {

	}

	int setEventInfo() {

	}

	int setAmount() {

	}

	bool setTicketUsed() {

	}
};