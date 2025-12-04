#include <iostream>

using namespace std;

int *max(int *a,int *b){
    if(*a>*b)
        return a;
    else
        return b;
}

int main() {
    int a = 25;
    int b = 2;
    int *c = max(&a, &b );


    cout << *c << endl;
    cout << &a <<" "<< &b<<" "<< c<< endl;
    return 0;
}
