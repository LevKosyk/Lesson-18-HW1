#include <iostream>
#include"Arbaiter.h"
using namespace std;
int main() {
	int n = 5;
	Employee* arr = new Employee[n]{
		{"Pupkin", 2008, "Manager", 12000, "None"},
		{"Dupkin", 1888, "Sallar", 22000, "PTY"},
		{"Boyn", 1945, "Counter", 10000, "International universaty"},
		{"Tylov", 1999, "Manager", 17000, "Kiev universaty"},
		{"Rubov", 2000, "Manager", 15000, "None"},
	}; int c = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i].year <= 1963)
		{
			c++;
		}
	}
	cout << c;
}