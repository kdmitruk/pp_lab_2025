#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int N=20;
    /*for(int i = 0;i<=N;i++){
        for(int j = 0;j<=i;j++){
            cout<<setw(5)<<j*i;
        }
        cout<<endl;
    }*/
    for(int i = 0;i<=N;i++){
        for(int j=0;j<i;j++){
            cout<<"     ";
        }
        for(int j = i;j<=N;j++){
            cout<<setw(5)<<j*i;
        }
        cout<<endl;
    }
}
