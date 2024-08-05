#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numRows, numQueries; // n and q
    cin >> numRows >> numQueries;
    std::cin.ignore(); // To ignore the remaining newline character after reading the number of rows

    vector<vector<int>> matrix;
    string line;
    
    for (int i = 0; i < numRows; ++i) {
        getline(cin, line);
        istringstream iss(line);
        vector<int> row;
        int num;

        while (iss >> num) {
            row.push_back(num);
        }

        matrix.push_back(row);
    }
    
    std::cin.ignore(); // To ignore the remaining newline character after reading the number of rows
   
    vector<pair<int, int>> pairs(numQueries);
    for (int i = 0; i < numQueries; i++) {
        cin >> pairs[i].first >> pairs[i].second;
    }
    
    for (int i = 0; i < numQueries; i++) {
        cout << matrix[pairs[i].first][pairs[i].second] << "\r\n";
    }
    
    
    
    
    return 0;
    
}
