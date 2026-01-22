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
int main(){

    double x1,y1,x2,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    Point p1=initPoint(x1,y1);
    Point p2=initPoint(x2,y2);
    cout<<calcDistance(p1,p2);
    return 0;
}
