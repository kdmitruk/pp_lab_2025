#include <iostream>
#include <algorithm>

using namespace std;

void show(int val){
    cout << val << " ";
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    // for_each(arr, arr+10, show);

    // for_each(arr, arr+10, [](int val){
    //     cout << val << " ";
    // });

    for (int val : arr) {
        cout << val << " ";
    }


    return 0;
}
