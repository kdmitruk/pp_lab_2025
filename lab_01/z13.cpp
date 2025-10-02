#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int  t1 = 2250;
    int y1 = 1971;
    long t2, y2;

    cin>>y2;

    t2 = t1 * pow(2,(y2-y1)/2);

    cout << t2;

    return 0;
}
