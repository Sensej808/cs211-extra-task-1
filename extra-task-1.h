#pragma once

double seconds_difference(double time_1, double time_2);

double hours_difference(double time_1, double time_2);

double to_float_hours(int hours, int minutes, int seconds);

double to_24_hour_clock(double hours);

int get_hours(int secs);
int get_minutes(int secs);
int get_seconds(int secs);

double time_to_utc(int utc_offset, double time);

double time_from_utc(int utc_offset, double time);