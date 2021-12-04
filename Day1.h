#pragma once
#include "Day.h"
#include "FileReader.h"
class Day1 : public Day
{
public:
	Day1(string filepath);

	int Part1() override;
	int Part2() override;

protected:
	vector<int> lines;
};

