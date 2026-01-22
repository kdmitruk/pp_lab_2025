#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

struct closestPointsOutput{
    double dist;
    int p1, p2;
};

double calcDistance(const Point &p1, const Point &p2){
    return hypot(p2.x-p1.x,p2.y-p1.y);
}

closestPointsOutput closestPoints(Point arr[], int size){

    double dist;
    double minDist = calcDistance(arr[0], arr[1]);
    int minIndex1 = 0;
    int minIndex2 = 1;

    for(int y = 0; y < size - 1; y++){
        for(int x = y + 1; x < size; x++){
            dist = calcDistance(arr[y], arr[x]);
            if(dist < minDist){
                minDist = dist;
                minIndex1 = y;
                minIndex2 = x;
            }
        }
    }
    return {minDist, minIndex1, minIndex2};
}
int main(){
    Point arr[5] = {{1,4},{3,17},{5,7},{11,8},{9,100}};
    closestPointsOutput result = closestPoints(arr, 5);
    cout << result.dist << " " << result.p1 << " " << result.p2 << endl;
}


