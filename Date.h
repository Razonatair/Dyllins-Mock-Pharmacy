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

#include <iostream>
#include <string>
#include "MasterValues.h"

using namespace std;

class Date
{
	public:
		Date();
		Date(int year, int month, int date);
		void addDays(int addDays);
		void addYears(int addYears);
		void set(int years, int months, int days);
		int getDay();
		int getMonth();
		int getYear();
		bool isThisDateBefore(const Date* other);
		bool isThisDateBefore(int compareYear, int compareMonth, int compareDate);
		string toStringYearMonthDay();
		string toStringDayMonthYear();
		Date& operator= (const Date& other);

	private:
		int day;
		int month;
		int year;
};