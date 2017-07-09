// ATSCustomer.cpp : Defines the base class for the ATS.
//
#include "stdafx.h"
#include <iostream>
#include <string>

/* Version Control Table
Date		Time		LastName	ChangeDescription
08JUL17		1700CET		DIEPPA		Added Precompiled Header
09JUL17     1100CET		Perryman	Added SQL statements to each getter/setter
*/

using namespace std;

class ATSCustomer {
public:
	string name;
	string username;
	int purchasedTickets; //not utilized in DB anymore
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
		/*
		Most efficient method would be to do this all with a single insert statment after they create the
		click submit after clicking submit on their registration, I think. ie:
		INSERT INTO customers VALUES(username,email,first,last,salt,hashed_password,creation)

		*/
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
		//"SELECT username from customers WHERE username="uname";
	}
	int getPurchasedTickets() { //No longer needed?

	}

	string getFirstName() {
		//"SELECT firstName from customers WHERE userId="xxx";"

	}

	int getUserID() {
		//"SELECT userId from customers WHERE userId="xxx";"

	}

	string getEmail() {
		//"SELECT email from customers WHERE userId="xxx";"
	}

	string getSalt() {
		//"SELECT salt from customers WHERE userId="xxx";"
	}

	string getPasswordHash() {
		//"SELECT passwordHash from customers WHERE userId="xxx";"
	}

	string getLastName() {
		//"SELECT lastName from customers WHERE userId="xxx";"

	}

	string getCreationDate() {
		//"SELECT creationDate from customers WHERE userId="xxx";"
	}

	//Setters
	string setUsername() {
		//UPDATE customers set userName = userName WHERE userID="xxx";
	}

	int setPurchasedTickets() { //Not needed anymore?

	}

	string setFirstName() {
		//UPDATE customers set firstName = firstName WHERE userID="xxx";
	}

	int setUserID() {
		//userID is generated automatically, not sure what to put here..
	}

	string setEmail(string email) {
		//UPDATE customers set email = email WHERE userID="xxx";
	}

	string setSalt() {
		//UPDATE customers set salt = genSalt() WHERE userID="xxx";
	}

	string setPasswordHash() {
		//UPDATE customers set passwordHash = genpasswordhash() WHERE userID="xxx";
	}

	string setLastName(string lastName) {
		//UPDATE customers set lastName = lastName() WHERE userID="xxx";
	}

	string setCreationDate() {

	}
};