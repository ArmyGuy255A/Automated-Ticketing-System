// ATSEvent.cpp : Defines the base class for the ATS.
//

#include <iostream>
#include <string>
using namespace std;

class ATSEvent {
public:
	int eventId;
	int eventName;
	string dateTime;
	string location;

	//Default Constructor
	ATSEvent() {}

	//Overloaded constructor
	ATSEvent(int eID) {
		eventId = getEventId(eID);
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
	int getEventId(int eID) {

	}
	
	int getEventName() {

	}

	string getDateTime() {

	}

	string getLocation() {

	}

	//Setters
	int setEventId(int eID) {

	}

	int setEventName() {

	}

	string setDateTime() {

	}

	string setLocation() {

	}
};