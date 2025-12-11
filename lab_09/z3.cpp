#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0; i<n; i++){
        arr[i] = i;
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    {
        int m=10;
        int* temp_arr = new int[m];
        int smaller= min(m, n);
        for(int i=0; i<smaller; i++){
            temp_arr[i] = arr[i];
        }
        for(int i=smaller; i<m; i++){
            temp_arr[i] = 1;
        }
        delete[] arr;
        arr = temp_arr;

        n=m;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
