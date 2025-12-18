#include <iostream>

using namespace std;

void swap(void *pa, void *pb, unsigned int size){

    char * cpa = (char*)pa;
    char * cpb = (char*)pb;

    char temp;

    for(int i = 0; i < size; i++){
        temp = cpa[i];
        cpa[i] = cpb[i];
        cpb[i] = temp;
    }
}

int main(){

    float a = 5.5, b = 3.3;

    swap(&a , &b, sizeof(a));

    cout << a << " " << b << endl;
    return 0;
}
