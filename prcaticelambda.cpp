//practicelambda from https://www.youtube.com/watch?v=MH8mLFqj-n8
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int d=7, e=5;
    //[cc](p){fd};
    std::vector<int> v{2,3,7,14,23};
    // std::for_each(v.begin(), v.end(), [](int x){std::cout << x << "\r\n";});
    // std::for_each(v.begin(), v.end(), [&d, e](int x){std::cout << x << "\r\n";});
    // std::for_each(v.begin(), v.end(), [=](int x){std::cout << x << "\r\n";});
    std::for_each(v.begin(), v.end(), [&](int x){std::cout << x << "\r\n";});
    
    return 0;
}
