#pragma once
//Written by Dyllin Black.
//This project is not meant for actual use as pharmacy management software for a number of reasons,
//it is just a personal practice project.

#include "Patient.h"

using namespace std;

Patient::Patient()
{
	patientID = -1;
	firstName = "";
	lastName = "";
	middleInitial = 'Z';
	birthDate = new Date();
	address = "";
	phoneCountryCode = -1;
	phoneAreaCode = -1;
	phonePrefix = -1;
	phoneLineNumber = -1;
	sex = 'Z';
	gender = 'Z';
}

Patient::Patient(string firstName,
	string lastName,
	char middleInitial,
	int birthYear,
	int birthMonth,
	int birthDay,
	string address,
	int phoneCountryCode,
	int phoneAreaCode,
	int phonePreFix,
	int phoneLineNumber,
	string sex,
	string gender)
{
	// TODO: Set up patientID system.
	patientID = -1;

	this->firstName = firstName;
	this->lastName = lastName;
	this->middleInitial = middleInitial;
	birthDate = new Date(birthYear, birthMonth, birthDay);
	this->address = address;
	this->phoneCountryCode = phoneCountryCode;
	this->phoneAreaCode = phoneAreaCode;
	this->phonePrefix = phonePreFix;
	this->phoneLineNumber = phoneLineNumber;
	this->sex = sex;
	this->gender = gender;
}