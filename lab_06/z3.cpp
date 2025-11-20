#include <iostream>

using namespace std;

bool is_palindrome   (int arr[], int n){
    for(int i = 0; i<n/2; i++){
        if (arr[i]!=arr[n-1-i])
            return false;
    }
    return true;
}

int main(){
    const int n=10;
    int arr[n]={1, 2, 3, 4, 5, 35, 4, 3, 2, 1};
    cout<<is_palindrome(arr, n);

    return 0;
};
