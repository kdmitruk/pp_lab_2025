#include <iostream>

int main() {
    int a=0,b=1,n;
    std::cin>>n;
    for (int i=0;i<n;i++) {
        int pom=b+a;
        b=a;
        a=pom;
        std::cout<<a<<" ";

    }
}