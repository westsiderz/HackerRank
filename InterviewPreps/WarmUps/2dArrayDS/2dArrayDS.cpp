// 2dArrayDS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calculateHourglass(vector<vector<int>>& arr, size_t iIndex, size_t jIndex)
{
    int sum = arr.at(iIndex).at(jIndex) + arr.at(iIndex).at(jIndex + 1) + arr.at(iIndex).at(jIndex + 2);
    sum += arr.at(iIndex + 1).at(jIndex + 1);
    sum += arr.at(iIndex + 2).at(jIndex) + arr.at(iIndex + 2).at(jIndex + 1) + arr.at(iIndex + 2).at(jIndex + 2);

    return sum;
}

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    vector<int> hourglassSums{};

    for (int i = 0; i < arr.size() - 2; ++i)
    {
        for (int j = 0; j < arr.at(i).size() - 2; ++j)
        {
            hourglassSums.emplace_back(calculateHourglass(arr, i, j));
        }
    }
    auto result = max_element(hourglassSums.begin(), hourglassSums.end());

    return *result;
}

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    cout << result << "\n";

    return 0;
}