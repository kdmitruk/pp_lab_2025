#include <iostream>

using namespace std;

void bin_rep(unsigned char value){
   unsigned char index = 1 << 7;
    while (index>0){
        if((value & index) == 0){
           cout<<'0';
        }
        else cout<<'1';
        index >>= 1  ;
    }
}

int main()
{
    int value;
    value = 100;
    bin_rep(value);

    return 0;

}
