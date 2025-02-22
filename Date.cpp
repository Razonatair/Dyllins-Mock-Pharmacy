//Written by Dyllin Black.
//This project is not meant for actual use as pharmacy management software for a number of reasons,
//it is just a personal practice project.

//Calendar days:
//January 31
//Feb 28, 29 in leap year.
//Mar 31
//Apr 30
//May 31
//Jun 30
//July 31
//Aug 31
//Sep 30
//Oct 31
//Nov 30
//Dec - 31

#include "Date.h"

using namespace std;

Date::Date()
{
	day = 1;
	month = 1;
	year = 1;
}

Date::Date(int days, int months, int years)
{
	day = days;
	month = months;
	year = years;
}

void Date::set(int days, int months, int years)
{
	day = days;
	month = months;
	year = years;
}

//Ignoring leap years for the purpose of this program. In reality, leap years would
//have to accounted for accurately according to the rules of leap years.
void Date::addDays(int add)
{
	int calendar[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 0; i < add; i++)
	{
		if (day + 1 > calendar[month])
		{
			month++;
			day = 1;
			if (month > 12)
			{
				year++;
				month = 1;
			}
		}
		else
		{
			day++;
		}
	}
}

bool Date::operator< (const Date& lhs, const Date& rhs)
{
	if (lhs.year <= rhs.year && lhs.month <= rhs.month && lhs.day <= rhs.day)
	{
		return true;
	}
	return false;
}

Date& Date::operator= (const Date& other)
{
	if (this == &other)
	{
		return *this;
	}

	Date toReturn = new Date(other.getDay, other.getMonth, other.getYear);
	return *toReturn;
}