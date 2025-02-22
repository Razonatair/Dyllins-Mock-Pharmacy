//Written by Dyllin Black.
//This project is not meant for actual use as pharmacy management software for a number of reasons,
//it is just a personal practice project.

#include "Prescription.h"

using namespace std;

Prescription::Prescription()
{

}

void Prescription::setExpirationDate()
{
	//TODO finish this.
	char DEAClass = medication.getDEAClass();

	//Most drugs aren't scheduled, and the script is valid for a year.
	if (DEAClass == 'N')
	{
		expirationDate.year = writtenDate.year + 1;
		expirationDate.month = writtenDate.month;
		expirationDate.day = writtenDate.day;
	}
	//Schedule 3-5 are valid for 6 months.
	if (DEAClass == '5' || DEAClass == '4' || DEAClass == '3')
	{
		if (writtenDate.month + 6 >= 13)
		{
			expirationDate.year = writtenDate.year + 1;
			expirationDate.month = writtenDate.month - 6;
			expirationDate.day = writtenDate.day;
			//CURRENT have to address that not all months have the same number of days.
		}
	}
	//Schedule 2 are valid for 30 days.
	if (DEAClass == '2')
	{

	}
	//Finally, schedule 1 drugs according to the DEA are invalid and basically auto-expired.
	return true;
}

bool Prescription::isThisExpired(Date today)
{
	if (today.year <= expirationDate.year &&
		today.month <= expirationDate.month &&
		today.day <= expirationDate.day)
	{
		return false;
	}
	return true;
}

float refillsRemaining()
{
	//TODO finish this.
}