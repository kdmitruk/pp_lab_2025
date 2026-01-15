#include <cmath>
#include <iostream>

using namespace std;

int comp(const void *a, const void *b) {
    const float *fa = (const float *)a;
    const float *fb = (const float *)b;

    const float eps = 1e-5;
    if(fabs(*fa-*fb) < eps) return 0;
    else if(*fa > *fb) return -1;
    else return 1;
}

int main() {
    const int SIZE = 6;
    float arr1[SIZE]={3,6,2,8,9,3};
    int arr2[SIZE]={3,6,3,2,7,2};

    qsort(arr1, SIZE, sizeof(float), comp);
    for(auto value: arr1)
        cout << value << " ";

    cout << endl;

    // for(auto value: arr2)
    //     cout << value << " ";

    // cout << endl;

    return 0;

}
