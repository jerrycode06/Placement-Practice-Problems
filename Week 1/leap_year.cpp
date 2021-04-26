#include <iostream>

using namespace std;
int c;
bool isLeapYear(int year);

void print_leap_years(int current_year,int leap_years)
{
	int leap_years_found = 0;
	while(leap_years_found < leap_years)
	{
		if(isLeapYear(current_year))
		{
			cout<<current_year<<" ";
			leap_years_found++;
			current_year += 4;
		}
		else
			current_year++;
	}
}

bool isLeapYear(int year)
{
	c++;
	if (year%4 == 0 && year%100 != 0)
		return true;
	else if(year % 400 == 0)
		return true;
	return false;
}



int main()
{
	int current_year, leap_years = 20;
	cout<<"Enter Current Year"<<endl;
	cin>>current_year;
	print_leap_years(current_year,leap_years);
	cout<<endl;
	cout<<c;
}