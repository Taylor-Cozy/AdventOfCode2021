#include "FileReader.h"

vector<string> FileReader::ReadFileString(string filename)
{
	ifstream file;
	file.open(filename);

	if (file.fail())
		cout << "Couldn't open file!" << endl;

	vector<string> lines;

	string line;
	while (getline(file, line)) {
		lines.emplace_back(line);
	}

	return lines;
}

vector<int> FileReader::ReadFileInt(string filename)
{
	ifstream file;
	file.open(filename);

	vector<int> lines;

	string line;
	while (getline(file, line)) {
		lines.emplace_back(stoi(line));
	}

	return lines;
}
