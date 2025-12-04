#include <iostream>

using namespace std;

void sum(const int &in1,const int &in2, int &out ){
    out = in1 + in2;
}

int main() {
    int a = 1;
    int b = 2;
    int c;

    sum(5, b, c);

    cout << c;
    return 0;
}
