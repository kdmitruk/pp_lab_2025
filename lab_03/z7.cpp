#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    for(int i = 0;i<=10;i++){
        for(int j = 0;j<=10;j++){
            cout<<setw(5)<<j*i;
        }
        cout<<endl;
    }
}
