#include <iostream>

using namespace std;
void revert(int *arr, const int SIZE) {
    int tmp;
    for (int i = 0; i < SIZE/2; i++) {
        tmp = *(arr + i);
        *(arr + i) = *(arr + SIZE - 1 - i);
        *(arr + SIZE - 1 - i) = tmp;
    }
}
void revert_v2(int *arr, const int SIZE) {
    int tmp;
    for (int i = 0, *front = arr, *back = arr+SIZE-1;
         i < SIZE/2; i++, front++, back--) {
        tmp = *front;
        *front = *back;
        *back = tmp;
    }
}
int main () {
    const int SIZE = 10;
    int arr[SIZE];

    for(int i = 0; i < SIZE; i++) {
        arr[i] = i;
    }

    revert_v2(arr, SIZE);

    for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}
