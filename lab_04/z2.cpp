//
// Created by student on 30.10.2025.
//
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int SIZE = 10;
    int arr[SIZE];
    srand(time(0));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand();
    }
    for (int i = 0; i < SIZE; i++)
        cout<<arr[i]<<" ";

    return 0;
}
