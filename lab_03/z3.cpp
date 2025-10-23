#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int number;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>number;
        sum+=number;
    }
    cout<<(float)sum/n;

    return 0;
}
