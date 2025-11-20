#include <iostream>

using namespace std;

void show_data   (float arr1[ ], int n, int arr2[], int m  ){
    for(int i = 0; i<m; i++){
        cout<<"["<<arr2[i]<<"] = ";
        if (arr2[i]<n)
            cout<<arr1[arr2[i]]<<" ";
        else
            cout<<"NAN ";
    }
}

int main(){
    const int n=5, m=5;
    float arr1[n]={2.3, 3.1, 0.5, 3.4, 5.2};
    int arr2[m]={4, 1, 3, 9, 1};
    show_data(arr1, n, arr2, m);

    return 0;



};
