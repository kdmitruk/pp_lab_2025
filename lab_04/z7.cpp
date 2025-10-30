#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int SIZE = 10;
    int arr[SIZE];
    srand(time(0));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand()%100;
    }
    for (int i = 0; i < SIZE; i++)
        cout<<arr[i]<<" ";
    int max = arr[0];
    int index = 0;

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    cout << endl;
    cout << index;
    return 0;
}