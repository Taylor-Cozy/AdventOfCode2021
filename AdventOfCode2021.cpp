#include <iostream>

#include "Day1.h"
#include "Day2.h"
#include "Day3.h"

const string FILEDIR = "../Files/";

using namespace std;

int main() {
	
	//Day1 day1(FILEDIR + "Day1.txt");
	//cout << day1.Part1() << endl;
	//cout << day1.Part2() << endl;
	//
	//Day2 day2(FILEDIR + "Day2.txt");
	//cout << day2.Part1() << endl;
	//cout << day2.Part2() << endl;

	Day3 day3(FILEDIR + "Day3.txt");
	cout << day3.Part1() << endl;
	cout << day3.Part2() << endl;

	return 0;
}