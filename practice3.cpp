#include "stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <variant>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

using matrixelement = pair<int, string>;

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    vector<matrixelement> matrix = {
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"},
        {5, "five"},
        {6, "six"},
        {7, "seven"},
        {8, "eight"},
        {9, "nine"}
    };
    
    if (n >= 1 && n <= 9) {
        for (const auto& row : matrix) {
            if (row.first == n){ cout << row.second; }
        }
    }
    else if ( n>9 ) {
        cout << "Greater than 9";
    }
    else {
        cout << "input outside range";
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
            find_if(s.begin(), s.end(), [](int c) {return !std::isspace(c);})
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), [](char ch) { return !isspace(static_cast<unsigned char>(ch)); }).base(),
        s.end()
    );
    
    return s;
}
