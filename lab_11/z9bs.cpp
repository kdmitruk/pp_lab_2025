#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int compareints (const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}

int main(){
    const int SIZE = 10;
    int arr[SIZE] = {1,3,6,5,2,40,4,34,77,16};

    sort(arr, arr+SIZE);
    for(auto value: arr)
        cout << value << " ";

    cout << endl;
    int key = 4;
    int *pos = (int *)bsearch(&key, arr, SIZE, sizeof(int), compareints);
    if(pos)
        cout << pos-arr;
    else
        cout << "not found";
}
