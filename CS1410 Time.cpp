#include <iostream>
using namespace std;

long secs_to_time(long seconds)
{
	long hours = seconds / 3600;
	seconds %= 3600;
	long minutes = seconds / 60;
	seconds %= 60;
	return hours;
	return minutes;
	return seconds;

};

int main()
{
	cout << "The time is: " << secs_to_time(3661) << endl;
	system("pause");
}