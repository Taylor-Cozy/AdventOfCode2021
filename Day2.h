#pragma once
#include "Day.h"
#include "FileReader.h"

class Day2 :
    public Day
{
public:
    Day2(string filepath);

    int Part1() override;
    int Part2() override;

protected:
    vector<string> lines;
};

