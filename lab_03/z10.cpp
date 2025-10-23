#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int N=5;

    for(int i = 0;i<N;i++){
        for(int j=N-i-1;j>=0;j--){
            cout<<" ";
        }
        for(int j = 0;j<=2*i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
