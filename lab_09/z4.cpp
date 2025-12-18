#include <iostream>
using namespace std;

bool in_range(float value, float min, float max) {
    return value>=min && value<max;
}

float *limit_arr(float arr[], int s, float min, float max, int *n_out){
    *n_out = 0;
    for(int i=0; i<s; i++)
        if (in_range(arr[i], min, max))
            (*n_out)++;


    float *result = new float[*n_out];
    for(int i=0, j=0; i<s; i++)
        if (in_range(arr[i], min, max))
            result[j++] = arr[i];
    return result;
}

int main(){
    const int S = 5;
    float arr[S] = {2.13, 5.78, 10.539, 9.214, 7.4567};
    int n_out;
    float *limited_arr = limit_arr(arr, S, 5, 8, &n_out);
    for(int i=0; i<n_out; i++){
        cout << limited_arr[i]<<" ";
    }
    delete [] limited_arr;
    return 0;


}
