#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int total_input = 3;
    vector<int> Xinput(total_input);
    int sum = 0;
    
    for(int& num : Xinput) {
        cin >> num;
    }
    
    for(int i=0; i<Xinput.size(); i++){
        sum = sum + Xinput.at(i);
    }
    
    cout << sum;
    
      
    return 0;
}
