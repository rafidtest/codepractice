#include "stdc++.h"

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

using matrixelement = variant<int, string>;

int main()
{
vector<vector<matrixelement>> matrix = {
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"},
        {5, "five"},
        {6, "six"},
        {7, "seven"},
        {8, "eight"},
        {9, "nine"},
    };
    
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    
    if (n >= 1 && n<=9) {
        matrixelement& elem = matrix[n][1];
        
        visit([](auto&& arg){
            cout << arg;
        }, elem);
    }
    else if (n > 9) {
        cout << "Greater than 9";
    }
    else {
        //do nothing
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
