#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int binary_search(int arr[], int size, int value){
    int left = 0,
        right = size-1;
    while(left<right){
        int mid = (left+right)/2;
        if(arr[mid]==value){
            return mid;
        }else if(value<arr[mid]){
            right = mid-1;
        }else{
            left = mid+1;
        }
    }
    return -1;
}
int main(){
    const int SIZE = 10;
    int arr[SIZE] = {1,3,6,5,2,40,4,34,77,16};

    sort(arr, arr+SIZE);
    for(auto value: arr)
        cout << value << " ";

    cout << endl;
    cout << binary_search(arr, SIZE, 100);
}
