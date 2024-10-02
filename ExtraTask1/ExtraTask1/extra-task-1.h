#pragma once
//Return the number of seconds later that a time in seconds time_2 is than a time in seconds time_1.
double seconds_difference(double, double);

//Return the number of hours later that a time in seconds time_2 is than a time in seconds time_1.
double hours_difference(double, double);

double to_float_hours(int, int, int);

double to_24_hour_clock(double);

int get_hours(int);

int get_minutes(int);

int get_seconds(int);

double time_to_utc(int, double);

double time_from_utc(int, double);
