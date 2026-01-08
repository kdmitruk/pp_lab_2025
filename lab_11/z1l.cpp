#include <iostream>

using namespace std;

int main(){
    float x, y;
    unsigned int z;
    x = 10;
    y = 20;
    float (*ptr[4])(float, float) = {
        [](float a, float b) {return a+b;},
        [](float a, float b) {return a-b;},
        [](float a, float b) {return a*b;},
        [](float a, float b) {return a/b;},
    };

    for(int i=0; i<4; i++)
        cout << ptr[i](x, y) << endl;
    return 0;
}
