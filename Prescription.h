#pragma once
//Written by Dyllin Black.
//This project is not meant for actual use as pharmacy management software for a number of reasons,
//it is just a personal practice project.

#include <string>
#include "Patient.h"
#include "Prescriber.h"
#include "Medication.h"
#include "Date.h"

using namespace std;

class Prescription
{
	public:
		Prescription();

		//ADD: setters/getters

		void setExpirationDate();
		bool isThisExpired(Date today);
		float refillsRemaining();

	private:
		int scriptID;

		Date writtenDate;
		Date expirationDate;
		Date earliestFillDate;	//Prescribers have the right to declare the earliest date that a script may be filled.
								//This allows the prescriber to send in, say, 3 schedule 2 scripts on the same day, but spaced out.

		string scannedImagePath;

		Patient patient;
		Prescriber prescriber;
		Medication medication;

		int quantityPrescribed;
		int quantityDispensed;
		
		string directions;

		int DAWcode;			//DAW stands for Dispense-as-written. This code follows:
								//0 - No production selection indicated.
								//1 - Substitution not allowed by prescriber.
								//2 - Substitution allowed - patient requested that brand product be dispensed
								//3 - Substitution allowed - pharmacist selected product dispensed
								//4 - Substitution allowed - generic drug not in stock
								//5 - Substitution Allowed - brand drug dispensed as generic
								//6 - Override
								//7 - Substitution Not Allowed - brand drug mandated by law
								//8 - Substitution Allowed - generic drug not available in marketplace
								//9 - Other
};