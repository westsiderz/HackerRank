// RepeatedString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long stringSize = static_cast<long>(s.size());
    long repetitionCount = n / stringSize;
    long remainingSize = n % stringSize;
    auto charCountFunc = [&](long stringLength) {
        long count = 0;
        for (long i = 0; i < stringLength; ++i)
        {
            if (s.at(i) == 'a')
            {
                ++count;
            }
        }
        return count;
    };
    long charCount = charCountFunc(stringSize) * repetitionCount + 
        charCountFunc(remainingSize);
    return charCount;
}

int main()
{
    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    cout << result << "\n";

    return 0;
}