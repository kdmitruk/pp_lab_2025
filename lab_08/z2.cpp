#include <iostream>

using namespace std;

int main() {
    int a;
    float b;
    char c;
    char d [7];
    double e;


    cout << &a << endl
         << &b << endl
         << (int*)&c << endl
         << &d << endl
         << &e << endl;

    return 0;
}
