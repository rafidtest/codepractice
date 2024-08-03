//practicelambda
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
//    [cc](p){fd};
    std::vector<int> v{2,3,7,14,23};
    std::for_each(v.begin(), v.end(), [](int x){std::cout << x << "\r\n";});
    
    return 0;
}
