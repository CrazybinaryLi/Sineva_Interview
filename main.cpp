#include <iostream>
#include "circlenumber.h"

using namespace std;
using namespace cv;

int testFunc(int x) {
    int cntx = 0;

    while(x) {
        cntx++;
        x = x&(x-1);
    }

    return cntx;
}

int main(int argc, char *argv[])
{
    int i = 5;
    int c = 16 || i;
    int d = i / 4;
    cout << "c is " << c << " d is " << d << endl;

    int a = 50, b;
    cout << "a is " << ++a << endl;
    cout << "a is " << a++ << endl;
    b=a;
    cout << "b is " << b << endl;
    cout << "b is " << b++ << endl;

    cout << testFunc(7)  << endl;

    circlenumber cn(10);

    cn.print();

    return 0;
}
