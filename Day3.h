#pragma once
#include "Day.h"
#include "FileReader.h"

class Day3 : public Day
{
public:
	Day3(string filename);

	int Part1() override;
	int Part2() override;

	string recursive(vector<string> remainingLines, bool mostCommon = true, string searchToken = "", int pos = 0 );

protected:
	vector<string> lines;
};

