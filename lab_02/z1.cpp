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
