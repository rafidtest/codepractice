#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int idata;
    long ldata;
    char cdata;
    float fdata;
    double ddata;
    scanf("%d %ld %c %f %lf", &idata, &ldata, &cdata, &fdata, &ddata);
    printf("%d\r\n%ld\r\n%c\r\n%f\r\n%lf", idata, ldata, cdata, fdata, ddata);
    return 0;
}
