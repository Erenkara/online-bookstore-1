/*
 * Check.cpp
 *
 *  Created on: Dec 24, 2016
 *      Author: eren
 */

#include <queue>
#include "Check.h"

string Check::getName() const{
	return name;
}

void Check::setName(string){
	this->name=name;
}

string Check::getBankID() const {
	return bankID;
}

void Check::setBankID(string){
	this->bankID=bankID;
}

Check::Check(double amount,string name,string bankID):Payment(amount){
	this->name=name;
	this->bankID=bankID;

}
Check::~Check() {

}

Check::Check(double amount) : Payment(amount){

}

void Check::performPayment() {
 cout << getAmount() << "is paid as Check." << endl;
}

string Check::paymentInfo() {
	string info = to_string(getAmount()) + " TL is paid as Check. \n";
	return info;
}


