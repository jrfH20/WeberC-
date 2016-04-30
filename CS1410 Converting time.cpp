/*		CS 1410 Assignment 2
*		June 3, 2014
*		John Ferguson
*		Description: Ch 4, problems 9 and 11
*		Ch 5, problem 6
*/	

#include <iostream>
using namespace std;

// This is where we're declaring our functions and structs. Don't change this section.
struct Time;
long time_to_seconds(Time&);
Time& seconds_to_time(long);

long Problem4_9(int, int, int);
Time& Problem4_11(Time&, Time&);
Time& Problem5_6(Time&, Time&);

void TestProblem4_9();
void TestProblem4_11();
void TestProblem5_6();
// End declaration section

int main()
{
	cout << "Testing chapter 4 problem 9:" << endl;
	TestProblem4_9();
	cout << endl << endl << "Testing chapter 4 problem 11:" << endl;
	TestProblem4_11();
	cout << endl << endl << "Testing chapter 5 problem 6:" << endl;
	TestProblem5_6();

	system("pause");
	return 0;
};

// Use this struct to hold your Time information.
struct Time
{
	int hours;
	int minutes;
	int seconds;
};

// Use this function to convert from a Time object to it's corresponding seconds value.
long time_to_seconds(Time& t)
{
	long s = (t.hours * 3600) + (t.hours * 60) + (t.seconds);
	
	// Change this to return the real seconds value for t
	return s;
};

// Use this function to convert from a seconds value to a Time object.
Time& seconds_to_time(long s)
{
	Time rt;
	// Put your code here to convert from seconds (s) to time (rt).
	rt.hours = (s / 60 / 60) % 24;
	rt.minutes = (s / 60) % 60;
	rt.seconds = s % 60;
	return rt;
};

// Write your code to fulfill problem 4.9 in this function.
// It should take the three int values, and store them in a Time object.  It should then convert
// that Time object into a long representing the number of seconds that Time object represents.
long Problem4_9(int hours, int minutes, int seconds)
{
	// Change this to take the hours, minutes, and seconds values and create a Time object.
	// Then, take the Time object and convert it to seconds.  Return the seconds value.
	
	Time bla = { hours, minutes, seconds };
	long hours2 = bla.hours * 3600;
	long minutes2 = bla.minutes * 60;
	
	long total = hours2 + minutes2 + bla.seconds;
	return total;
	
	return 0;
};

// Write your code to fullfill problem 4.11 in this function.
// It should take two Time objects, and convert each of them to their value in seconds.
// It should then add those two values together, and convert that value back into
// a Time object.  It should then return that last Time object.
Time& Problem4_11(Time& t1, Time& t2)
{
	// Change this to take the two time objects, convert them to seconds, add them together,
	// store that seconds value in rt in hours:minutes:seconds format, and return rt.

	long one = time_to_seconds(t1);
	long two = time_to_seconds(t2);

	long combined = one + two;
	
	//JF got lost after this step. 
	seconds_to_time(combined);

	Time rt;
	return rt;
};

// Write your code to fullfill problem 5.6 in this function.
// It should take two Time objects, and convert each of them to their value in seconds
// using the time_to_seconds() function.  It should then add those two values together,
// and conver the resulting value back into a Time object using the seconds_to_time()
// function.  It should then return that Time object.
Time& Problem5_6(Time& t1, Time& t2)
{
	// Change this to use the time_to_seconds and seconds_to_time functions to convert
	// and add the two time objects (just like in problem 4.11.
	
	long abc = time_to_seconds(t1);
	long def = time_to_seconds(t2);

	long combined2 = abc + def;
	

	//JF got lost after this step.
	seconds_to_time(combined2);

	Time rt;
	return rt;
}

/*  Everything below here is the test code that will be used to grade your code.
Please do not modify anything below this line.
*/

// This will test chapter 4 problem 9.  It creates the hours, minutes, seconds values and passes
// them in to the Problem4_9 function.  It then expects a total seconds value, and prints out if
// it matches what it should be.
void TestProblem4_9()
{
	// Create initial values
	int hours = 3,
		minutes = 37,
		seconds = 12;
	long answer = 13032;

	long totalSeconds = Problem4_9(hours, minutes, seconds);
	if (totalSeconds != answer)
	{
		cout << "Test 1 failed. Expected " << answer << " and got " << totalSeconds << endl;
	}
	else
	{
		cout << "Test 1 passed." << endl;
	}
}

// This will test chapter 4 problem 11.  It will create two time objects, and pass them
// into the Problem4_11 function.  It expects a time object back, and will compare it
// to the expected resulting value.
void TestProblem4_11()
{
	Time t1, t2;
	t1.hours = 5;
	t1.minutes = 27;
	t1.seconds = 52;

	t2.hours = 8;
	t2.minutes = 32;
	t2.seconds = 17;

	Time result = Problem4_11(t1, t2);

	if (result.hours == 14 && result.minutes == 0 && result.seconds == 9)
	{
		cout << "Test 2 passed." << endl;
	}
	else
	{
		cout << "Test 2 failed. Expected 14:00:09 and got " << result.hours << ":" << result.minutes << ":" << result.seconds << endl;
	}
}

// This will test chapter 5 problem 6.  It will create two time objects, and pass them
// into the Problem4_11 function.  It expects a time object back, and will compare it
// to the expected resulting value.
void TestProblem5_6()
{
	Time t1, t2;

	t1.hours = 3;
	t1.minutes = 55;
	t1.seconds = 22;

	t2.hours = 1;
	t2.minutes = 17;
	t2.seconds = 34;

	Time result = Problem5_6(t1, t2);
	if (result.hours == 5 && result.minutes == 12 && result.seconds == 56)
	{
		cout << "Test 3 passed." << endl;
	}
	else
	{
		cout << "Test 3 failed. Expected 5:12:56 and got " << result.hours << ":" << result.minutes << ":" << result.seconds << endl;
	}
}
