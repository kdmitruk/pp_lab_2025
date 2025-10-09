#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    std::cin>>a;
    std::cin>>b;
    // swap
    double pom=a;
    a=b;
    b=pom;

    std::cout << a << " " << b;
    return 0;
}


// int main() {
//     double a;
//     cout << sizeof(int8_t) << endl;
//     cout << sizeof(int16_t) << endl;
//     cout << sizeof(int32_t) << endl;
//     cout << sizeof(int64_t) << endl;
//     cout << endl;
//     cout << sizeof(char) << endl;
//     cout << sizeof(short) << endl;
//     cout << sizeof(int) << endl;
//     cout << sizeof(long) << endl;
//     cout << sizeof(long long) << endl;
//     cout << endl;
//     cout << sizeof(float) << endl;
//     cout << sizeof(double) << endl;
//     return 0;
// }
