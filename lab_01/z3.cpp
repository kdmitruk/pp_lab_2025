#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
    int a = 109;
    cout << hex << a << endl;
    cout << oct << a << endl;
    printf("dec: %d \noct: %o \nhex: %x", a, a, a);
}
