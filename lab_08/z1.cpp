#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int* pa;

    cout << pa << " " << *pa << endl;
    printf("%p %d\n", pa, *pa);
    cout << sizeof(a) << " " << sizeof(pa) << endl;
    pa = &a;
    cout << pa << " " << *pa << endl;
    printf("%p %d\n", pa, *pa);
    return 0;
}
