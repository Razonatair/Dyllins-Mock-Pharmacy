#pragma once

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
// This program currently ignores leap years.
static int constexpr DAYS_PER_MONTH[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

// These are the variables that determine C1, C2, C3, C4, C5 expiration dates.
static int SCHEDULE_1_EXPIRES_AFTER_DAYS = -1;		//Current law says all schedule 1 drugs are illegal and cannot be prescribed.
static int SCHEDULE_2_EXPIRES_AFTER_DAYS = 30;
static int SCHEDULE_3_EXPIRES_AFTER_DAYS = 180;
static int SCHEDULE_4_EXPIRES_AFTER_DAYS = 180;
static int SCHEDULE_5_EXPIRES_AFTER_DAYS = 180;
static int UNSCHEDULED_EXPIRES_AFTER_DAYS = 365;