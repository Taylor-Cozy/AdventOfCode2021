#include "Day2.h"

Day2::Day2(string filepath)
{
	FileReader f;
	lines = f.ReadFileString(filepath);
}

int Day2::Part1()
{
	int forward = 0;
	int depth = 0;

	for (string x : lines) {
		string command = x.substr(0, x.find(" "));
		int amount = stoi(x.substr(x.find(" ") + 1));

		if (command == "forward")
			forward += amount;
		if (command == "down")
			depth += amount;
		if (command == "up")
			depth -= amount;
	}

	return forward * depth;
}

int Day2::Part2()
{
	int forward = 0;
	int depth = 0;
	int aim = 0;

	for (string x : lines) {
		string command = x.substr(0, x.find(" "));
		int amount = stoi(x.substr(x.find(" ") + 1));

		if (command == "forward") {
			forward += amount;
			depth += aim * amount;
		}
		if (command == "down")
			aim += amount;
		if (command == "up")
			aim -= amount;
	}

	return forward * depth;
}