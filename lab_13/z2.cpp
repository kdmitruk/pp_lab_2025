#include <cmath>
#include <iostream>

using namespace std;
struct Point {
    double x;
    double y;
};
Point initPoint(double x,double y){
    return(Point{x,y});
}
double calcDistance(Point p1, Point p2){
    return hypot(p2.x-p1.x,p2.y-p1.y);
}

void showPoint(const Point &p){
    cout << p.x << " " << p.y << endl;
}
int main(){
    showPoint(Point{5,10});
    Point p1;
    showPoint(p1);
    Point* p2 = new Point{1, 2};
    showPoint(*p2);
    delete p2;
    Point p3[3] = {{1,2},{3,4},{5,6}};

    for(const Point &p:p3){
        showPoint(p);
    }

    Point* p4[3];

    for(int i = 0; i < 3; i++){
        p4[i] = new Point{i*2.0, i*2.0+1};
        showPoint(*p4[i]);
        delete p4[i];
    }

    Point* p5 = new Point[3]  {1,2,3,4,5,6};

    for(int i = 0; i < 3; i++){
        // p5[i].x = i*3.0;
        // p5[i].y = i*3.0 + 1;
        showPoint(p5[i]);
    }

    delete[] p5;

    Point** p6 = new Point*[3];

    for(int i = 0; i < 3; i++){
        p6[i] = new Point{i*4.0, i*4.0+1};
        showPoint(*p6[i]);
        delete p6[i];
    }

    delete[] p6;

    return 0;
}
