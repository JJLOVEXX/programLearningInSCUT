// this Pointer of Time Class.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "Time.h" // Time class definition
using namespace std;
// constructor function to initialize private data;
// calls member function setTime to set variables;
 // default values are 0 (see class definition)
#ifndef TIME_H
#define TIME_H
class Time
	 {
	 public:
		 Time(int = 0, int = 0, int = 0); // default constructor
										  // set functions (the Time & return types enable cascading)
		 Time &setTime(int, int, int); // set hour, minute, second
		 Time &setHour(int); // set hour
		 Time &setMinute(int); // set minute
		 Time &setSecond(int); // set second
			
			 // get functions (normally declared const)
			 int getHour() const; // return hour
	 int getMinute() const; // return minute
	 int getSecond() const; // return second
	
		 // print functions (normally declared const)
			 void printUniversal() const; // print universal time
		 void printStandard() const; // print standard time
	private:
		 int hour; // 0 - 23 (24-hour clock format)
		 int minute; // 0 - 59
		 int second; // 0 - 59
	
}; // end class Time

#endif
 Time::Time(int hr, int min, int sec)
 {
	 setTime(hr, min, sec);
	 } // end Time constructor

 // set values of hour, minute, and second
 Time &Time::setTime(int h, int m, int s) // note Time & return
 {
	setHour(h);
	 setMinute(m);
	 setSecond(s);
	 return *this; // enables cascading
		 } // end function setTime

 // set hour value
 Time &Time::setHour(int h) // note Time & return

{
	 if (h >= 0 && h < 24)
		 hour = h;
	 else
		 throw invalid_argument("hour must be 0-23");
	
		
		 } // end function setHour
 Time &Time::setMinute(int m) // note Time & return 
 // set minute value
 {
	 if (m >= 0 && m < 60)
		 minute = m;
	 else
		 throw invalid_argument("minute must be 0-59");
	 // end function setMinute
 }
		 // set second value
	 Time &Time::setSecond(int s) // note Time & return
		  {
		  if (s >= 0 && s < 60)
			 second = s;
		  else
			  throw invalid_argument("second must be 0-59");
		 
			 
			 } // end function setSecond
	 
		  // get hour value
		  int Time::getHour() const
		  {
		  return hour;
		  } // end function getHour
	 
		 // get minute value
		 int Time::getMinute() const
		  {
		  return minute;
		  } // end function getMinute
	 
		 // get second value
		  int Time::getSecond() const
		  {
		 return second;
		 } // end function getSecond
	 
		  // print Time in universal-time format (HH:MM:SS)
		  void Time::printUniversal() const
		  {
		  cout << setfill('0') << setw(2) << hour << ":"
			  << setw(2) << minute << ":" << setw(2) << second;
		  } // end function printUniversal
	 
		  // print Time in standard-time format (HH:MM:SS AM or PM)
		  void Time::printStandard() const
		 {
		 cout << ((hour == 0 || hour == 12) ? 12 : hour % 12)
			  << ":" << setfill('0') << setw(2) << minute
			 << ":" << setw(2) << second << (hour < 12 ? " AM" : " PM");
		  } // end function printStandard

		  int main()
			 {
			  Time t; // create Time object
					  // cascaded function calls
			  t.setHour(18).setMinute(30).setSecond(22);
			  // output time in universal and standard formats
			cout << "Universal time: ";
			  t.printUniversal();
			
			 cout << "\nStandard time: ";
		 t.printStandard();
		
			 cout << "\n\nNew standard time: ";
			 // cascaded function calls
			 t.setTime(20, 20, 20).printStandard();
			 cout << endl;
		  } // end main