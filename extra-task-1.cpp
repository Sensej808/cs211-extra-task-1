#include <cmath>;
#include "extra-task-1.h"

double seconds_difference(double time_1, double time_2)
{
    return time_2 - time_1;
    
    /*    
        Return the number of seconds later that a time in seconds
        time_2 is than a time in seconds time_1.
            
    */
}

double hours_difference(double time_1, double time_2)
{
    return (time_1 - time_2) / 3600;
    /*
        Return the number of hours later that a time in seconds
        time_2 is than a time in seconds time_1.
        
    */
}

double to_float_hours(int hours, int minutes, int seconds)
{
    return hours + (minutes / 60) + (seconds / 3600);
    /*
        Return the total number of hours in the specified number
        of hours, minutes, and seconds.

        Precondition: 0 <= minutes < 60  and  0 <= seconds < 60

    */
}

double to_24_hour_clock(double hours)
{
    double dr = 0;
    modf(hours, &dr);
    return  (int)hours % 24 + (hours - dr);

    /*
        hours is a number of hours since midnight. Return the
        hour as seen on a 24-hour clock.


        
        You may wish to inspect various function in <cmath> to work
        with integer and fractional part of a hours separately.
        
    */
}


int get_hours(int secs) {
    return secs / 3600;
}

int get_minutes(int secs) {
    return (secs / 60)% 60;
}

int get_seconds(int secs) {
    return secs % 60;
}
/*
    Implement three functions
        * get_hours
        * get_minutes
        * get_seconds
    They are used to determine the hours part, minutes part and seconds part 
    of a time in seconds. E.g.:



    In other words, if 3800 seconds have elapsed since midnight, 
    it is currently 01:03:20 (hh:mm:ss).
*/

double time_to_utc(int utc_offset, double time)
{
    return get_hours(time - utc_offset);
    /*
        Return time at UTC+0, where utc_offset is the number of hours away from
        UTC+0.
    */
}

double time_from_utc(int utc_offset, double time)
{
    return get_hours(time + utc_offset);
    /*
        Return UTC time in time zone utc_offset.
    */
}
