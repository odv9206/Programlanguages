// Otto Villavicencio
// CS-210 
// Project One 

#include "header.h"

/*
 TwelveHourClock class constructor. 
 Creates variables for hours, minutes, seconds, and highnoon.
*/
TwelveHourClock::TwelveHourClock() {
    hours = 0; 
    minutes = 0; 
    seconds = 0; 
    highnoon = "A M";  
}


/*
 Add hours to TwelveHourClock. Increases hours by h, 
 if hours exceeds 12 toggle between AM and PM to get the correct time format.
 If hours equal to 12 toggle highnoon from AM to PM
*/
void TwelveHourClock::addHour(int h) {
    hours += h; 
    if (hours > 12) { 
        hours -= 12;  
    }
    else if (hours == 12) { 
        if (highnoon == "A M") {
            highnoon = "P M";
        }
        else if (highnoon == "P M") {
            highnoon = "A M";
        }
    }
}

/* 
 Add minutes to TwelveHourClock clock. Increases minutes by m, 
 if minutes exceed 60 calculate the number of hours to be added.
 Adjust time between 0-59 for minutes and add the calculated hours.
*/
void TwelveHourClock::addMinute(int m) {
    minutes += m; 
    if (minutes >= 60) { 
        int h = minutes / 60; 
        minutes -= 60 * h; 
        addHour(h); 
    }
}

/*
 Add seconds to TwelveHourClock clock. Increases seconds by sec, 
 if seconds exceed 60 calculate the number of seconds to be added.
 Adjust time between 0-59 for seconds and add the calculated minutes.
*/
void TwelveHourClock::addSeconds(int sec) {
    seconds += sec; 
    if (seconds >= 60) { 
        int m = seconds / 60; 
        seconds -= 60 * m;
        addMinute(m);
    }
}

// TwentyFourHourClock class constructor. Creates variables for hours, minutes, and seconds.
TwentyFourHourClock::TwentyFourHourClock() {
    hours = 0;
    minutes = 0;
    seconds = 0;
}

/*
 Add hours to TwentyFourHourClock. Increases hours by h,
 if hours exceed 24 reset back to 0 to increment back from 0.
*/
void TwentyFourHourClock::addHour(int h) {
    hours += h;
    if (hours >= 24) {
        hours -= 24;
    }
}

/* 
 Add minutes to TwentyFourHourClock. Increases minutes by m,
 if minute exceed 60 calculate the number of hours to be added.
 Adjust time between 0-59 for minutes and add the calculated hours.
*/
void TwentyFourHourClock::addMinute(int m) {
    minutes += m;
    if (minutes >= 60) {
        int h = minutes / 60;
        minutes -= 60 * h;
        addHour(h);
    }
}

/*
 Add seconds to TwentyFourHourClock. Increases seconds by sec,
 if seconds exceed 60 calculate the number of minutes to be added.
 Adjust time between 0-59 for seconds and add the calculated minutes.
*/
void TwentyFourHourClock::addSeconds(int sec) {
    seconds += sec;
    if (seconds >= 60) {
        int m = seconds / 60;
        seconds -= 60 * m;
        addMinute(m);
    }
}

// Display the time for both TwelveHour and TwentyFourHour clocks side by side
void displayTime(TwelveHourClock user12Hour, TwentyFourHourClock user24Hour) {
    cout << "*************************\t\t" << "*************************" << endl;
    cout << "*\t12-Hour Clock\t*\t\t";
    cout << "*\t24-Hour Clock\t*" << endl;
    cout << "*\t" << setw(2) << setfill('0') << user12Hour.hours << ":" << setw(2) << setfill('0') << user12Hour.minutes;
    cout << ":" << setw(2) << setfill('0') << user12Hour.seconds << " " << user12Hour.highnoon << "\t*\t\t";
    cout << "*\t" << setw(2) << setfill('0') << user24Hour.hours << ":" << setw(2) << setfill('0') << user24Hour.minutes;
    cout << ":" << setw(2) << setfill('0') << user24Hour.seconds << "\t*" << endl;
    cout << "*************************" << "\t\t*************************" << endl;
}

// Display the menu options
void displayMenu() {
    cout << "\n*************************" << endl;
    cout << "* 1 - Add One Hour\t*" << endl;
    cout << "* 2 - Add One Minute\t*" << endl;
    cout << "* 3 - Add One Second\t*" << endl;
    cout << "* 4 - Exit Program\t*" << endl;
    cout << "*************************" << endl;
}

/* 
 Calling TwelveHourClock object and TwentyFourHourClock object, 
 while also creating a user select variable.
*/
int main() {
    TwelveHourClock twelveHourClock;
    TwentyFourHourClock twentyFourHourClock;

    int userSelection = 0;

    /*
     Create a while loop that takes user input.
     Program will display both clocks and menu options.
     If user inputs any option other than 4, program will continue looping.
     Else user inputs wrong number, promt will appear with Invalid selection.
    */
    while (userSelection != 4) {
        displayTime(twelveHourClock, twentyFourHourClock);
        displayMenu();
        cin >> userSelection;

        if (userSelection == 1) {
            twelveHourClock.addHour(1);
            twentyFourHourClock.addHour(1);
        }
        else if (userSelection == 2) {
            twelveHourClock.addMinute(1);
            twentyFourHourClock.addMinute(1);
        }
        else if (userSelection == 3) {
            twelveHourClock.addSeconds(1);
            twentyFourHourClock.addSeconds(1);
        }
        else if (userSelection == 4) {
            cout << "Exiting Program, Goodbye!" << endl;
        }
        else {
            cout << "Invalid selection. Please make a selection from the menu" << endl;
        }
    }

    return 0;
}