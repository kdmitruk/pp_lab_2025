#include <iostream>

using namespace std;

int main () {
    const int SIZE = 10;

    float arr1[SIZE], arr2[SIZE];
    float result = 0;
    for (int i = 0; i < SIZE; i++)
        arr1[i] = i+1;
    for (int i = 0; i < SIZE; i++)
        arr2[i] = i+420;
    for (int i = 0; i < SIZE; i++)
        result += arr1[i]*arr2[i];
    cout << result;

    return 0;
}