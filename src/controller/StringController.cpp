/*
 * StringController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: Tristan Gaebler
 */
#include "StringController.h"
#include <iostream>

using namespace std;

void StringController :: start() {

	string myString = "Hello C++ World";
	int stringInt = myString.length(); //First method used.
	cout << stringInt << endl;

	string correctPassword = "qwerty";
	string password;
	cout << "Please type a password: " << endl;
	cin >> password;
	int answer = correctPassword.compare(password);
	cout << answer << endl;






}




