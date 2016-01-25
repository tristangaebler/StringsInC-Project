/*
 * StringController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: Tristan Gaebler
 */
#include "StringController.h"
#include <iostream>

using namespace std;

//First method used.
void StringController :: stringLength() {
	string myString = "Hello C++ World";
	int stringInt = myString.length();
	cout << stringInt << endl;
}

//Second method used
void StringController :: compareString() {
	string correctPassword = "qwerty";
	string password;
	cout << "Please type a password: " << endl;
	cin >> password;
	int answer = correctPassword.compare(password);
	cout << answer << endl;
}

//Third method used
void StringController :: emptyString() {
	string name = "";
	if(name.empty()) {
		cout << "The name string is empty";
	}
	else {
		cout << "The name string is not empty" << endl;
	}
}

void StringController :: start() {

	stringLength(); //.length() method
	compareString(); //.compare method
	emptyString(); //.empty() method

}




