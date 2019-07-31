// BreakingTheRecord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;


// Complete the breakingRecords function below.
vector<int> breakingRecords(vector<int> scores) {
	// Keeps the current min and max result
	int min = scores.at(0);
	int max = scores.at(0);

	// Keeps the count of min and max results
	int minCount = 0;
	int maxCount = 0;

	for (auto score : scores)
	{
		if (score < min)
		{
			min = score;
			++minCount;
		}
		else if (score > max)
		{
			max = score;
			++maxCount;
		}
	}

	return { maxCount, minCount };
}

int main()
{
	vector<int> result = breakingRecords({ 10, 5, 20, 20, 4, 5, 2, 25, 1 });
	std::cout << result.at(0) << " " << result.at(1) << "\n";
}

