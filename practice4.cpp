//practice 4
#include <iostream>
#include <cstdio>
#include <vector>
#include <variant>
#include <algorithm>

using namespace std;
using matrixelement = pair<int, string>;

int main() {
    // Complete the code.
    auto input1 = 0;
    auto input2 = 0;
    auto numberDisplay = 0;
    cin >> input1;
    cin >> input2;
    
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
    
    for (numberDisplay = input1; numberDisplay <= input2; numberDisplay++) {
        if (numberDisplay >= 1 && numberDisplay <= 9) {
            for (const auto& row : matrix) {
                if (row.first == numberDisplay) { cout << row.second << "\r\n"; }
            }
        }
        else {
            if (numberDisplay % 2 == 0) { cout << "even\r\n"; }
            else { cout << "odd\r\n"; }
        }
    }
    
    
    return 0;
}
