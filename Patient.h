#pragma once
//Written by Dyllin Black.
//This project is not meant for actual use as pharmacy management software for a number of reasons,
//it is just a personal practice project.

#include <string>
#include "Date.h"

using namespace std;

class Patient
{
	public:
		//ADD: setter/getters.
		Patient();

		Patient(string firstName,
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
				string gender);


	private:
		int patientID;

		string firstName;
		string lastName;
		char middleInitial;

		Date* birthDate;

		string address;
								//Breakdown of phone numbers, 'N' marks what the int covers.
		int phoneCountryCode;	//N-(000)-000-0000
		int phoneAreaCode;		//0-(NNN)-000-0000
		int phonePrefix;		//0-(000)-NNN-0000
		int phoneLineNumber;	//0-(000)-000-NNNN

		string sex;
		string gender;

		//ADD: Medication record, transaction record objects.
};
