#include <iostream>

using namespace std;

int main () {
    const int SIZE = 10;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i;
    }
    int tmp;
    for (int i = 0; i < SIZE/2; i++) {
        tmp = arr[i];
        arr[i] = arr[SIZE - 1 - i];
        arr[SIZE - 1 - i] = tmp;
    }
    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";

}//
// Created by student on 30.10.2025.
//