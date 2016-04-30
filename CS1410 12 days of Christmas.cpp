/*		CS 1410 Assignment 4
		June 9th, 2014
		John ferguson
		Description: 12 Days of Christmas only using recursion
*/

#include <iostream>
using namespace std;

//This is the recursion portion of the program. song calls itself.
void song(int day)
{
	//This cout prints everytime.
	cout << "On the " << day << " of Christmas my true love sent to me " << endl;
	
	//These if statments determine what is going to be printed to the screen
	if (day > 11) cout << "12 Drummers Drumming" << endl;
	if (day > 10) cout << "11 Pipers Piping," << endl;
	if (day > 9) cout << "10 Lords a Leaping," << endl;
	if (day > 8) cout << "9 Ladies Dancing," << endl;
	if (day > 7) cout << "8 Maids a Milking," << endl;
	if (day > 6) cout << "7 Swans a Swimming," << endl;
	if (day > 5) cout << "6 Geese a Laying," << endl;
	if (day > 4) cout << "5 Golden Rings," << endl;
	if (day > 3) cout << "4 Calling Birds," << endl;
	if (day > 2) cout << "3 French Hens," << endl;
	if (day > 1) cout << "2 Turtle Doves," << endl;
	if (day > 1) cout << "and ";
	if (day > 0) cout << "a Partridge in a Pear Tree." << endl;

	//Increments the day counter
	day++;
	cout << endl;

	//Tells song to call itself through an "if" statement
	if (day <= 12) song(day);
}

int main()
{
	//passes the int value 1 into the song funtion
	song(1);
	
	system("pause");
	return 0;
}