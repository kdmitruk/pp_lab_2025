#include <iostream>
#include <cmath>
float F(float* arr,int n){
    if(n==0){
        return 0;
    }
    return pow(-1,n)*arr[n-1]+F(arr,n-1);
};

void f_iter(float* arr,int n) {
    float f_n_1 = 0;
    int sign = -1;
    for (int i=0; i<n; i++) {
        f_n_1 = sign*arr[i]+f_n_1;
        std::cout << f_n_1 << " ";
        sign = sign == 1 ? -1 : 1;
    }
}

int main(){
    int n;
    float arr[20];
    std::cin>>n;
    if(n<=20 && n>0){
        for(int i=0;i<n;i++){
            std::cin>>arr[i];
        }
        f_iter(arr, n);
        // for(int i=1;i<=n;i++){
        //     std::cout<<F(arr,i) << " ";
        // }
    }


}
