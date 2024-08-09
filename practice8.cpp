#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;


int main() {
    const int index_row = 0;
    const int index_column = 1;
    
    int num_of_rows = 0;
    int num_of_queries = 0;
    int input_number;
    int output_row, output_column;
    cin >> num_of_rows >> num_of_queries;
    cin.ignore();
    vector<vector<int>> matrix(num_of_rows * num_of_queries);
    string input_line;
    
    for (int i = 0; i < (num_of_rows * num_of_queries); i++) {
        getline(cin, input_line);
        istringstream stream(input_line);
        
        while (stream >> input_number) {
            matrix[i].push_back(input_number);
        }
        
        input_line = "";
    }
    
    for (int j = 0; j < num_of_queries; j++) {
        output_row = matrix[num_of_rows + j][index_row];
        output_column = matrix[num_of_rows + j][index_column];
        cout << matrix[output_row][output_column+1];
        if (j < (num_of_queries-1)) {
            cout << "\r\n";
        }
    }
    
    cout << endl;

#if 0
    cout << "\r\nyour input is:\r\n";
    for (int iterate : matrix[0]) {
        cout << iterate << " ";
    }
    
    cout << "\r\n";
    
    for (int iterate : matrix[1]) {
        cout << iterate << " ";
    }

    cout << "\r\n";
    
    for (int iterate : matrix[2]) {
        cout << iterate << " ";
    }

    cout << "\r\n";
    
    for (int iterate : matrix[3]) {
        cout << iterate << " ";
    }
    
    cout << endl;
#endif
    
//    for (int i=0; i < num_of_rows; i++) {
//        
//    }
//    
//    cout << "\r\nyour input is : \r\n";
//    cout << num_of_rows << " " << num_of_queries << "\r\n";
    
    
    
#if 0
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numRows, numQueries; // n and q
    cin >> numRows >> numQueries;
    cin.ignore(); // To ignore the remaining newline character after reading the number of rows

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
    
    cin.ignore(); // To ignore the remaining newline character after reading the number of rows
   
    vector<pair<int, int>> pairs(numQueries);
    for (int i = 0; i < numQueries; i++) {
        cin >> pairs[i].first >> pairs[i].second;
    }
    
    for (int i = 0; i < numQueries; i++) {
        cout << matrix[pairs[i].first][pairs[i].second] << "\r\n";
    }
#endif
    
    
    
    return 0;
    
}
