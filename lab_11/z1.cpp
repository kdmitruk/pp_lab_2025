#include <iostream>

using namespace std;

float sum(float a, float b){
    return a+b;
}

float sub(float a, float b){
    return a-b;
}

float mul(float a, float b){
    return a*b;
}

float div(float a, float b){
    return a/b;
}

int main(){
    float x, y;
    unsigned int z;
    x = 10;
    y = 20;
    z = 3;
    float (*ptr[4])(float, float) = {sum, sub, mul, div};
    /*
    ptr[0]=sum;
    ptr[1]=sub;
    ptr[2]=mul;
    ptr[3]=div;
    */
    cout<<ptr[z](x, y);
    return 0;
}
