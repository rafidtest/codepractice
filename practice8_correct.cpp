#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;


int main() {
    // get length of 2D array and number of queries
    int n, q;
    cin >> n >> q;

    // create 2D array
    int** a = new int*[n]();

    // fill 2D array with 1D subarrays
    for (int i = 0; i < n; i++) {
        // get the length of the 1D array at a[i]
        int k;
        cin >> k;

        // create the 1D subarray with the given length
        int* i_arr = new int[k]();

        // fill the subarray with k values
        for (int j = 0; j < k; j++) {
            cin >> i_arr[j];
        }

        // store the subarray in a
        a[i] = i_arr;
    }


    // run queries on a
    for (int q_num = 0; q_num < q; q_num++) {
        // get i, j as the 'query' to get a value from a
        int i, j;
        cin >> i >> j;
        cout << a[i][j] << endl;
    }

    // delete 2D array (each subarray must be deleted)
    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
    
    
#if 0
    const int index_row = 0;
    const int index_column = 1;
    
    int num_of_rows = 0;
    int num_of_queries = 0;
    int input_number; int count = 0;
    int output_row, output_column;
    cin >> num_of_rows >> num_of_queries;
    cin.ignore();
    
    const int MAX_SIZE = 10;
    int matrix[MAX_SIZE][MAX_SIZE] = {0};
    
    string input_line;
    
    for (int i = 0; i < (num_of_rows * num_of_queries); i++) {
        getline(cin, input_line);
        istringstream stream(input_line);
        
        while (stream >> input_number && count < MAX_SIZE) {
            matrix[i][count++] = input_number;
        }
        
        count = 0;
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
#endif
    
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
