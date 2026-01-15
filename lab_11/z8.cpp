#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int a = 564222;
    int b = 2;

    char arr[20];
    sprintf(arr, "%d", a);
    cout << arr;

    cout << endl;

    int size = strlen(arr);
    cout << count(arr, arr+size, b+'0');

    return 0;
}
