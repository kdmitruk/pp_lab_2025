#include <iostream>

using namespace std;
int setBit(int x, int n){
    return x | (1u<<n);
}
int clearBit(int x, int n){
    return x & ~(1u<<n);
}
int toggleBit(int x, int n){
    return x ^ (1u<<n);
}

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

int main(){
    int x = 10;
    //1010
    cout<<setBit(x,0)<<" ";bin_rep(setBit(x,0));cout<<endl;
    //1011
    cout<<clearBit(x,3)<<" ";bin_rep(clearBit(x,3));cout<<endl;
    //0010
    cout<<toggleBit(x,1)<<" ";bin_rep(toggleBit(x,1));cout<<endl;
    //1000

    return 0;
}
