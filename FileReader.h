#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class FileReader
{
public:
	vector<string> ReadFileString(string filename);
	vector<int> ReadFileInt(string filename);
};