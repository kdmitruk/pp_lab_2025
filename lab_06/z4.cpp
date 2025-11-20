#include <iostream>

using namespace std;

int is_repetition(int[], int); //deklaracja

int main(){
    const int n=10;
    int arr[n]={100, 2, 3, 4, 5, 35, 4, 3, 2, 1};
    cout << is_repetition(arr, n) << endl;
    return 0;
};

int is_repetition (int arr[], int n){ //definicja
    for(int i = 0; i<n; i++){
       for(int j = i+1; j < n; j++) {
           if(arr[i] == arr[j]){
                return arr[i];
           }
      }
    }
    return 0;
}
