#include "Day3.h"

Day3::Day3(string filename)
{
	FileReader f;
	lines = f.ReadFileString(filename);
}

int Day3::Part1()
{
	string gammaRate = "";

	for (int i = 0; i < lines[0].length(); ++i) {

		int numberOfOnes = 0;

		for (auto s : lines) {
			if (s[i] == '1')
				numberOfOnes++;
		}

		if (numberOfOnes > (lines.size() / 2))
			gammaRate += "1";
		else
			gammaRate += "0";
	}

	int gamma = stoi(gammaRate, 0, 2);
	int epsilon = pow(2, gammaRate.length()) - gamma - 1;

	return gamma * epsilon;
}

string Day3::recursive(vector<string> remainingLines, bool mostCommon, string searchToken, int pos)
{
	if (remainingLines.size() == 1)
		return remainingLines[0];

	vector<string> ones;
	vector<string> zeroes;

	for (auto s : remainingLines) {
		if (s[pos] == '1')
			ones.emplace_back(s);
		else
			zeroes.emplace_back(s);
	}

	if (ones.size() >= zeroes.size()) {
		// ones are more common
		if (mostCommon)
			return recursive(ones, mostCommon, "", pos + 1);
		else
			return recursive(zeroes, mostCommon, "", pos + 1);
	}
	else {
		if (mostCommon)
			return recursive(zeroes, mostCommon, "", pos + 1);
		else
			return recursive(ones, mostCommon, "", pos + 1);
	}
}

int Day3::Part2()
{
	string o2 = recursive(lines);
	string co2 = recursive(lines, false);
	return stoi(o2, 0, 2) * stoi(co2, 0, 2);
	//return 0;
}

