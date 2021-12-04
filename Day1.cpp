#include "Day1.h"

Day1::Day1(string filepath)
{
	FileReader f;
	lines = f.ReadFileInt(filepath);
}

int Day1::Part1()
{
	int numIncreases = 0;


	for (int i = 1; i < lines.size(); ++i) {
		if (lines[i] > lines[i - 1])
			numIncreases++;
	}

	return numIncreases;
}

int Day1::Part2()
{
	int numIncreases = 0;
	int previous = 0;

	for (int i = 2; i < lines.size(); ++i) {
		int sum = 0;

		for (int j = i; j >= i - 2; --j) {
			sum += lines[j];
		}

		if (sum > previous)
			numIncreases++;

		previous = sum;
	}

	return numIncreases - 1; // first value
}
