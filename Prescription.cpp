#pragma once
//Written by Dyllin Black.
//This project is not meant for actual use as pharmacy management software for a number of reasons,
//it is just a personal practice project.

#include "Prescription.h"

using namespace std;

Prescription::Prescription()
{
	scriptID = -1;
	writtenDate = new Date();
	expirationDate = new Date();
	earliestFillDate = new Date();
	scannedImagePath = "";
	patient = new Patient();
	prescriber = new Prescriber();
	medication = new Medication();
	quantityPrescribed = 0;
	quantityDispensed = 0;
	directions = "";
	DAWcode = 0;
}

void Prescription::setExpirationDate()
{
	//TODO finish this.
	char DEAClass = medication->getDEAClass();
	Date* expirationDate = writtenDate;

	switch (DEAClass)
	{
	case 'N':
		expirationDate->addDays(UNSCHEDULED_EXPIRES_AFTER_DAYS);
		break;
	case '5':
		expirationDate->addDays(SCHEDULE_5_EXPIRES_AFTER_DAYS);
		break;
	case '4':
		expirationDate->addDays(SCHEDULE_4_EXPIRES_AFTER_DAYS);
		break;
	case '3':
		expirationDate->addDays(SCHEDULE_3_EXPIRES_AFTER_DAYS);
		break;
	case '2':
		expirationDate->addDays(SCHEDULE_2_EXPIRES_AFTER_DAYS);
		break;
	case '1':
		expirationDate->addDays(SCHEDULE_1_EXPIRES_AFTER_DAYS);
		break;
	}
}

bool Prescription::isThisExpired(Date* today)
{
	if (medication->getDEAClass() == '1')
	{
		return true;
	}
	if (today->isThisDateBefore(expirationDate) == true)
	{
		return false;
	}
	return true;
}

double Prescription::refillsRemaining()
{
	//TODO finish this.
	return 0.0;
}