#include <iostream>
using namespace std;

int main()
{
    float sum=0;
    float num;
    while(sum<=100){
        cin>>num;
        sum+=num;
    }
    cout<<sum-100;
    return 0;
}
