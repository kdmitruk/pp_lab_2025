#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    for (int row=0;row<n;row++) {
        int flag=row;
        for (int col=0;col<m;col++) {
            if (flag%2==0)
                cout<<"#"<<" ";
            else
                cout<<"o"<<" ";
            flag++;
        }
        cout<<endl;
    }
}
