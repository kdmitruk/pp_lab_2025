#include <iostream>
#include <algorithm>

using namespace std;
bool comp(float a, float b){
    return a > b;
}
int main() {
    const int SIZE = 6;
    float arr1[SIZE]={3,6,2,8,9,3};
    int arr2[SIZE]={3,6,3,2,7,2};

    sort(arr1, arr1+SIZE, comp);
    for(int value: arr1)
        cout << value << " ";

    cout << endl;

    sort(arr2, arr2+SIZE);
    for(int value: arr2)
        cout << value << " ";

    cout << endl;

    return 0;

}
