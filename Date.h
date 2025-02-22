#pragma once
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

class Date
{
	public:
		Date();
		void addDays(int add);
		void set(int days, int months, int years);
		bool operator< (const Date& lhs, const Date& rhs);
		bool operator> (const Date& lhs, const Date& rhs) { return rhs < lhs; }
		bool operator<=(const Date& lhs, const Date& rhs) { return !(lhs > rhs); }
		bool operator>=(const Date& lhs, const Date& rhs) { return !(lhs < rhs); }
		Date& operator= (const Date& other);

	private:
		int day;
		int month;
		int year;
};