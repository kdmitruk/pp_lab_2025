#include <iostream>


int main(){

    char arr[100]="Ala ma kota";
    char *pos;
    for (pos=arr; *pos!=0; pos++){}
    std::cout << pos-arr;
    //char* half = pos+((pos-arr)/2);
    char tmp;
    for(char * left = arr, * right = pos - 1; left < right; left++, right--){
        tmp = *left;
        *left = *right;
        *right = tmp;
    }
    std::cout << arr;
    return 0;
}
