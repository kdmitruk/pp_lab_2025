#include <iostream>
// #include <algorithm>
#include <cstring>
using namespace std;

struct Point {
    double x;
    double y;
};

void copyArr(Point src[], Point dst[], const unsigned int size){
    // for(int i=0; i<size; i++){
    //     dst[i]=src[i];
    // }
    // std::copy(src, src+size, dst);
    memcpy(dst, src, size*sizeof(Point));
}

void showPoint(const Point &p){
    cout << p.x << " " << p.y << endl;
}

int main(){
    Point arr1[3] = {1, 2, 3, 4, 5, 6};
    Point arr2[3];
    copyArr(arr1, arr2, 3);
    for(const Point &p:arr2){
        showPoint(p);
    }
    return 0;
}
