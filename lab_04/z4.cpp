#include<iostream>
#include <cmath>
using namespace std;

int main () {
    const int SIZE = 10;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i+1;
    }
    float artmavg= 0, geomavg= 1, haravg= 0, stdev= 0;
    int sum= 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
        geomavg *= arr[i];
        haravg += 1.0f/arr[i];

    }
    artmavg = (float)sum/SIZE;
    geomavg= pow(geomavg, 1.0f/SIZE);
    haravg= SIZE/haravg;
    for (int i = 0; i < SIZE; i++) {
        stdev += pow(arr[i]-artmavg, 2);

    }
    stdev= sqrt(stdev/SIZE);
    cout<<"sum"<<sum<<endl;
    cout<< "artmavg"<<artmavg<<endl;
    cout<< "geomavg"<<geomavg<<endl;
    cout<< "haravg"<<haravg<<endl;
    cout<< "stdev"<<stdev<<endl;
}