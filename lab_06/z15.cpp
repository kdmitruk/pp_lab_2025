#include <iostream>
#include <cmath>
using namespace std;

int a(const int n){
    if(n==0||n==1){
        return 1;
    }
    return  a(n-1) + 2 * a(n-2) + 3;
}

int av2(const int n){
    if(n==0||n==1){
        return 1;
    }
    int a_n_1 = 1;
    int a_n_2 = 1;
    int tmp;
    for(int i=2; i<=n; i++){
        tmp = a_n_1 + 2 * a_n_2 + 3;
        a_n_2 = a_n_1;
        a_n_1 = tmp;
    }
    return tmp;
}

int main(){

    const int n=45;
    cout<<a(n)<<endl;

    cout<<av2(n);

    return 0;

}
