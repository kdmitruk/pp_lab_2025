#include <iostream>
using namespace std;

int main()
{
    float maxi=0;
    float number;
    do{
        cin>>number;
        maxi=max(number,maxi);
    }while(number!=0);
    cout<<maxi;

    return 0;
}
