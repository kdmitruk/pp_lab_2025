#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int number;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>number;
        /*if(number>maxi){
            maxi=number;
        }*/
        maxi=max(number,maxi);
    }
    cout<<maxi;

    return 0;
}
