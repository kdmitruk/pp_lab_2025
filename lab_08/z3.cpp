#include <iostream>

using namespace std;

void sum(int *in1,int *in2, int *out ){
    *out = *in1 + *in2;
}

int main() {
    int a = 1;
    int b = 2;
    int c;

    sum(&a, &b, &c);

    cout << c;
    return 0;
}
