// Written by Dyllin Black.
// This project is not meant for actual use as pharmacy management software for a number of reasons,
// it is just a personal practice project.

// Calendar days:
// January 31
// Feb 28, 29 in leap year.
// Mar 31
// Apr 30
// May 31
// Jun 30
// July 31
// Aug 31
// Sep 30
// Oct 31
// Nov 30
// Dec - 31

#include "Date.h"

using namespace std;

Date::Date()
{
	year = 1;
	month = 1;
	day = 1;
}

Date::Date(int years, int months, int days)
{
	year = years;
	month = months;
	day = days;
}

void Date::set(int years, int months, int days)
{
	year = years;
	month = months;
	day = days;
}

// Ignoring leap years for the purpose of this program. In reality, leap years would
// have to be accounted for accurately according to the rules of leap years.
void Date::addDays(int addDays)
{
	int calendar[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 0; i < addDays; i++)
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

int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getYear()
{
	return year;
}

bool Date::isThisDateBefore(const Date& compare)
{
	if (year <= compare.year && month <= compare.month && day <= compare.day)
	{
		return true;
	}
	return false;
}

bool Date::isThisDateBefore(int compareYear, int compareMonth, int compareDay)
{
	if (year <= compareYear && month <= compareMonth && day <= compareDay)
	{
		return true;
	}
	return false;
}

Date& Date::operator=(const Date& other)
{
	if (this == &other)
	{
		return *this;
	}

	Date *toReturn = new Date(other.day, other.month, other.year);
	return *toReturn;
}