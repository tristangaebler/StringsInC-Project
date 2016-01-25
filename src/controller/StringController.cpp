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
		cout << "The name string is empty\n";
	}
	else {
		cout << "The name string is not empty\n" << endl;
	}
}

//Fourth method used
void StringController :: subString() {
	string longString = "ebfeiowufbwiujefnsubfnirwub";
	string shortString = longString.substr(4, 8);
	cout << "The string use to be" + longString + " but now it's " + shortString << endl;
}

//Fifth method used
void StringController :: subStringTwo() {
	string fullName = "Tristan Woodhouse Gaebler";
	string lastName = fullName.substr(17);
	cout << "My full name is " + fullName + " ,but my last name is " + lastName << endl;
}

//Sixth method used
void StringController :: atString() {
	string school = "AltaHighSchool";
	cout << school + "\n" << endl;
	char newSchool = school[2];
	cout << newSchool << endl;
	char otherNewSchool = school.at(8);
	cout << otherNewSchool << endl;

}

void StringController :: start() {

	stringLength(); //.length() method
	compareString(); //.compare method
	emptyString(); //.empty() method
	subString(); //.substr(start, end) method
	subStringTwo(); //.substr(start) method
	atString(); //.at() and [] used

}




