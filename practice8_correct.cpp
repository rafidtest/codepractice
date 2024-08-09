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
    int num_of_rows, num_of_queries;
    cin >> num_of_rows >> num_of_queries;

    // create 2D array
    int** matrix = new int*[num_of_rows]();

    // fill 2D array with 1D subarrays
    for (int i = 0; i < num_of_rows; i++) {
        // get the length of the 1D array at a[i]
        int length_of_array;
        cin >> length_of_array;

        // create the 1D subarray with the given length
        int* iterate_array = new int[length_of_array]();

        // fill the subarray values
        for (int j = 0; j < length_of_array; j++) {
            cin >> iterate_array[j];
        }

        // store the subarray in a matrix
        matrix[i] = iterate_array;
    }


    // run queries on a
    for (int q_num = 0; q_num < num_of_queries; q_num++) {
        // get i, j as the 'query' to get a value from a
        int i, j;
        cin >> i >> j;
        cout << matrix[i][j] << endl;
    }

    // delete 2D array (each subarray must be deleted)
    for (int i = 0; i < num_of_rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
