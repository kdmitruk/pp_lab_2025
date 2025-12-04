#include <iostream>

using namespace std;

void print_array(int* begin, int* end){
    for(int* p = begin; p < end; p++){
        cout << *p << " ";
    }

}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print_array(arr, arr+10);

    return 0;
}
