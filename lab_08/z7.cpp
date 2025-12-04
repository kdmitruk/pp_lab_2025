#include <cstdio>
int main() {
    float x = -101000000;
    printf("%x",
           *reinterpret_cast<unsigned int *>(&x));
    return 0;
}
