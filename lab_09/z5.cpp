#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void seq(float arr[], int n){

    float fn_1 = 0, fn;

    for(int i = 1, sign = -1; i <= n; i++, sign *= -1){
        // Fn = (-1)^n * arr[n-1]+Fn-1, n>0
        fn = sign * arr[i - 1] + fn_1;
        cout << fn << " ";
        fn_1 = fn;
    }
}

void rand_gen(float arr[], int n){
    for(int i = 0; i < n; i++){
        arr[i] = rand()%10;
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(){

    int n;

    cin >> n;

    float *arr = new float[n];

    rand_gen(arr, n);

    cout << endl;

    seq(arr, n);

    delete[] arr;
    return 0;
}
