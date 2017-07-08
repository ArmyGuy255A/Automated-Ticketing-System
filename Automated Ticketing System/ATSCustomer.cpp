// ATSCustomer.cpp : Defines the base class for the ATS.
//
#include "stdafx.h"
#include <iostream>
#include <string>

/* Version Control Table
Date		Time		LastName	ChangeDescription
08JUL17		1700CET		DIEPPA		Added Precompiled Header

*/

using namespace std;

class ATSCustomer {
public:
	string name;
	string username;
	int purchasedTickets;
	string firstName;
	int userID;
	string email;
	string salt;
	string passwordHash;
	string lastName;
	string creationDate;

	//Default Constructor
	ATSCustomer() {}

	//Overloaded constructor
	ATSCustomer(string uname) {
		username = getUsername(uname);
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
	string getUsername(string uname) {

	}

	int getPurchasedTickets(){
	
	}
	
	string getFirstName() {

	}

	int getUserID() {

	}

	string getEmail() {

	}

	string getSalt() {

	}

	string getPasswordHash() {

	}

	string getLastName() {

	}

	string getCreationDate() {

	}

	//Setters
	string setUsername() {

	}

	int setPurchasedTickets() {

	}

	string setFirstName() {

	}

	int setUserID() {

	}

	string setEmail() {

	}

	string setSalt() {

	}

	string setPasswordHash() {

	}

	string setLastName() {

	}

	string setCreationDate() {

	}
};