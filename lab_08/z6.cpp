#include <cstdio>

using namespace std;

typedef unsigned char uchar;
typedef unsigned int uint;

void convert(uint word,
             uchar* b0, uchar* b1, uchar* b2,
             uchar* b3){
    //uchar* pointer = (uchar*)&word; Język C
    uchar* pointer =
    reinterpret_cast<uchar*>(&word); //C++
    *b0 = *(pointer++);
    *b1 = *(pointer++);
    *b2 = *(pointer++);
    *b3 = *(pointer++);
    printf("%x %x %x %x \n", *b0, *b1, *b2, *b3);
}

int main() {
    uint a = 2137420;
    uchar b0, b1, b2, b3;

    convert(a, &b0, &b1, &b2, &b3);



    printf("%x %x %x %x %x \n",a, b0, b1, b2, b3);

    return 0;
}
