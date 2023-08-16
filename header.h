// Otto Villavicencio
// CS-210 
// Project One 

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

// Clock object
class Clock {
public:
    int hours;
    int minutes;
    int seconds;
};

// TwelveHourClock class based upon Clock object. 
class TwelveHourClock : public Clock {
public:
    string highnoon;

    TwelveHourClock();       // Constructor
    void addHour(int h);    // Add hours to the clock
    void addMinute(int m);  // Add minutes to the clock
    void addSeconds(int sec); // Add seconds to the clock
};

// TwentyFourHourClock class based upon Clock object. 
class TwentyFourHourClock : public Clock {
public:
    TwentyFourHourClock();     // Constructor
    void addHour(int h);    // Add hours to the clock
    void addMinute(int m);  // Add minutes to the clock
    void addSeconds(int sec); // Add seconds to the clock
};

// Display the time for both clocks
void displayTime(TwelveHourClock user12Hour, TwentyFourHourClock user24Hour);
void displayMenu(); // Display the menu options

#endif