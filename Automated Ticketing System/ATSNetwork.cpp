// ATSATSNetwork.cpp : Defines the base class for the ATS.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <windows.networking.h>

/* Version Control Table
Date		Time		LastName	ChangeDescription
08JUL17		1700CET		DIEPPA		Added Precompiled Header

*/

using namespace std;

enum interfaceType {
	Ethernet,
	WiFi,
};

class ATSNetwork {
public:
	bool networkAvailable;
	interfaceType activeInterface;

	//Default Constructor
	ATSNetwork() {}

	//Overloaded constructor
	ATSNetwork(string className) {
		//Since this is private, you can only use it within the class. It's protected.
		//privateFunction();
	};

	//All functions in this class are publicised. 
public:
	bool testNetworkConnection(string ipAddress) {
		
	}


//All of the functions in this class are protected and can only be accessed
//within the class itself.
private:
	
	interfaceType getActiveNetworkInterface() {
		
	}
	
	void setActiveNetworkInterface() {

	}

	void failoverNetworkConnection() {

	}

};