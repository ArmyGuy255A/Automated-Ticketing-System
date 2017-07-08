// ATSPaymentBroker.cpp : Defines the base class for the ATS.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include "ATSNetwork.cpp"
#include "ATSDBController.cpp"

/* Version Control Table
Date		Time		LastName	ChangeDescription
08JUL17		1700CET		DIEPPA		Added Precompiled Header

*/

using namespace std;
	
enum paymentType {
	CreditCard,
	Prepaid,
	PayPal,
	ApplePay,
	GoogleWallet,
};

class ATSPaymentBroker {
public:
	//Default Constructor
	ATSPaymentBroker() {}

	//Overloaded constructor
	ATSPaymentBroker(paymentType payment) {
		
		//Since this is private, you can only use it within the class. It's protected.
		//privateFunction();
	};

	//All functions in this class are publicised. 
public:
/*
	void publicFunction() {
		
	}
*/

//All of the functions in this class are protected and can only be accessed
//within the class itself.
private:
	void processPayment(ATSCustomer *customer) {
		
	}

	void acceptPayment(ATSCustomer *customer) {

	}

	void declinePayment() {

	}

};