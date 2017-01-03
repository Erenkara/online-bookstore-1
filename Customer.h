/*
 * Customer.h
 *
 *  Created on: 24 Ara 2016
 *      Author: baran
 */
#include <iostream>
#include <string>
#pragma once
#ifndef CUSTOMER_H_
#define CUSTOMER_H_
using namespace std;
class Customer{
private:
	long customerID;
	string name;
	string adress;
	string phone;
	double bonus;
	string email;
	string username;
	string password;
	static int lastId;
public:
	Customer();
	~Customer();
	void sendBill();
	long getCustomerID() const;
	void setCustomerID(long _customerID);
	void setName(string _name);
	string getAdress() const;
	void setAdress(string _adress);
	string getName() const;
	string getPhone() const;
	void setPhone(string _phone);
	string getEmail() const;
	void setEmail(string _email);
	double getBonus() const;
	void setBonus(double _bonus);
	string getUsername() const;
	void setUsername(string _username);
	string getPassword() const;
	void setPassword(string _password);
	bool checkAccount(string _username,string _password);
	void addBonus(double);
	void useBonus(double);
	static int getLastId();
	static void setLastId();
};



#endif /* CUSTOMER_H_ */
