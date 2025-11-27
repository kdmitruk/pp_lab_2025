#include <iostream>
#include <cmath>
using namespace std;

int a(const int n){
    if(n==0||n==1){
        return 1;
    }
    return  a(n-1) + 2 * a(n-2) + 3;
}

void av2(const int n,int arr[]){
    arr[0]=1;
    arr[1]=1;

    int tmp;
    for(int i=2; i<n; i++)
        arr[i] = arr[i-1] + 2 * arr[i-2] + 3;
}

int av3(const int n, int arr[]){
    if(n==0||n==1){
        arr[n] = 1;
        return 1;
    }
    arr[n] = arr[n-1] + 2 * arr[n-2] + 3;
    return  av3(n-1, arr) + 2 * av3(n-2, arr) + 3;
}

int main(){
    const int n=30;
    int arr[n];
    //for(int i=0;i<n ;i++){
    //    arr[i]=a(i);
    //    cout<<arr[i]<<endl;
    //}
    av3(n-1,arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;

}
