#include <iostream>

using namespace std;

int main () {
    const int SIZE1 = 10, SIZE2 = 6, SIZE3 = SIZE1+SIZE2;

    int arr1[SIZE1], arr2[SIZE2], arr3[SIZE3];
    for (int i = 0; i < SIZE1; i++)
        arr1[i] = i+1;
    for (int i = 0; i < SIZE2; i++)
        arr2[i] = i+420;

    for (int i = 0; i < SIZE1; i++)
        arr3[i] = arr1[i];

    for (int i = 0; i < SIZE2; i++)
         arr3[i+SIZE1] = arr2[i];

    // for (int i = 0, j = SIZE1; i < SIZE2; i++, j++) {
    //     arr3[j] = arr2[i];
    // }

    for (int i = 0; i < SIZE3; i++)
        cout << arr3[i] << " ";


}