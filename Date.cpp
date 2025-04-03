#pragma once
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
	//This project currently ignores leap years.
	if (years >= 1900 && years <= 3000 && months >= 1 && months <= 12 && days >= 1 && days <= DAYS_PER_MONTH[months])
	{
		year = years;
		month = months;
		day = days;
	}
	else
	{
		cout << "Attempt to create invalid date prevented.";
		year = 1;
		month = 1;
		day = 1;
		exit(1);
	}
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
	for (int i = 0; i < addDays; i++)
	{
		if (day + 1 > DAYS_PER_MONTH[month])
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

void Date::addYears(int addYears)
{
	year += addYears;
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

bool Date::isThisDateBefore(const Date* compare)
{
	if (year < compare->year)
	{
		return true;
	}
	if (month < compare->month)
	{
		return true;
	}
	if (day < compare->day)
	{
		return true;
	}
	return false;
}

bool Date::isThisDateBefore(int compareYear, int compareMonth, int compareDay)
{
	if (year < compareYear)
	{
		return true;
	}
	if (month < compareMonth)
	{
		return true;
	}
	if (day < compareDay)
	{
		return true;
	}
	return true;
}

string Date::toStringYearMonthDay()
{
	if (month < 10)
	{
		if (day < 10)
		{
			//Month and day are single digit.
			return to_string(year) + "/0" + to_string(month) + "/0" + to_string(day);
		}
		else
		{
			//Month is single digit, but not day.
			return to_string(year) + "/0" + to_string(month) + "/" + to_string(day);
		}
	}
	else
	{
		if (day < 10)
		{
			//Day is single digit, but not month.
			return to_string(year) + "/" + to_string(month) + "/0" + to_string(day);
		}
		else
		{
			//Neither day nor month are single digit.
			return to_string(year) + "/" + to_string(month) + "/" + to_string(day);
		}
	}
}

string Date::toStringDayMonthYear()
{
	if (month < 10)
	{
		if (day < 10)
		{
			//Month and day are single digit.
			return "0" + to_string(day) + "/0" + to_string(month) + "/" + to_string(year);
		}
		else
		{
			//Month is single digit, but not day.
			return to_string(day) + "/0" + to_string(month) + "/" + to_string(year);
		}
	}
	else
	{
		if (day < 10)
		{
			//Day is single digit, but not month.
			return "0" + to_string(day) + "/" + to_string(month) + "/" + to_string(year);
		}
		else
		{
			//Neither day nor month are single digit.
			return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
		}
	}
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