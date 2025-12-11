#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void printByIndex(float *arr1, int n1, int *arr2, int n2){
    for(int i = 0;i<n2;i++){
        int index = arr2[i];
        if(index>=0&&index<n1){
            cout<<arr1[index]<<" ";
        }
        else{
            cout << NAN << " ";
        }
    }
    cout << endl;

}

void rand_gen(int arr[], int n){
    for(int i = 0; i < n; i++){
        arr[i] = rand()%10;
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(){

    int n1,n2;
    cin>>n1>>n2;
    float* arr1 = new float[n1];
    int* arr2 = new int[n2];

    cout<<"Array 1 "<<endl;
    for(int i=0;i<n1;i++){
        arr1[i]=(i+1)*1.5;
        cout<<arr1[i]<<" ";
    }
    cout<<endl<<"Array 2 (rand)"<<endl;
    rand_gen(arr2, n2);
    cout << endl;
    printByIndex(arr1,n1,arr2,n2);
    cout << endl;


    delete[] arr1;
    delete[] arr2;
    return 0;
}
