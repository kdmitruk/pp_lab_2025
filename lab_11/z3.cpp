#include <iostream>
#include <algorithm>

using namespace std;

bool filter_lower(char a){
    return a>='a' && a<='z';
}

int main(){
    const int SIZE = 8;
    char arr[SIZE] = "aBcDeFg";
    char out[SIZE] = {};

    char* copy_end;

    copy_end = copy_if(arr, arr+SIZE, out, filter_lower);

    cout<< out << endl;

    fill(copy_end, out+SIZE-1, '-');

    cout<< out;

    return 0;
}
