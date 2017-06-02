#include <iostream>
#include "circlenumber.h"

using namespace std;

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

	int a1[10] = { 0,1,2,3,4,15,16,17,18,19 };
	int b1[10] = { 0,1,2,3,4,5,6,7 };
	int len_a = 10, len_b = 8;
	int* c1 = sort(a1, len_a, b1, len_b);

	for (auto i = 0; i < len_a + len_b; i++)
	{
		cout << setw(3) << c1[i] << " ";
	}

    return 0;
}
