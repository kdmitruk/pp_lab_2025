#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

struct Circle{
    Point center;
    double r;
};

int pointsInCircle(const Circle &circle, Point arr[],
                   const int size, Point *output[]){
    int counter = 0;
    for(int i = 0; i < size; i++){
        //(x - a)2 + (y - b)^2 = r^2.)
        if(pow(arr[i].x - circle.center.x,2)
           +pow(arr[i].y - circle.center.y, 2)
           <= pow(circle.r,2)){
            output[counter]=&arr[i];
            counter ++;
        }
    }
    return counter;
}
int main(){

    Point arr[10];
    Point *ptr[10];

    for(int i = 0; i <10; i++){
        arr[i].x = (double)rand()/RAND_MAX*10;
        arr[i].y = (double)rand()/RAND_MAX*10;
    }
    Circle circle = {{0, 5}, 5};
    int ptrsize=pointsInCircle(circle, arr, 10, ptr);
    for(int i=0; i<ptrsize; i++){
        std::cout<< ptr[i]->x << " " << (*ptr[i]).y << std::endl;
    }
    return 0;
}


 /*
  *
  * struct Matrix {float arr[9]};
  *
  * Matrix m;
  * m.arr[5];
  *
  */
