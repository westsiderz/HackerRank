#include <iostream>
#include <string>
using namespace std;

constexpr const char upStep = 'U';
constexpr const char downStep = 'D';

// Complete the countingValleys function below.
int countingValleys(int n, string s) 
{
    // Initially at the sea level
    int depth = 0;
    int valeysCount = 0;

    for (auto stepChar : s)
    {
        if (stepChar == downStep)
        {
            --depth;
        }
        else
        {
            ++depth;
            // If the hiker is at the sea level, 
            // he/she has passed one valey
            if (depth == 0)
            {
                ++valeysCount;
            }
        }
    }
    return valeysCount;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    cout << result << "\n";

    return 0;
}
