#include <iostream>

using namespace std;

int main()
{
    int y;
    cin>>y;
    if(y%4==0){
        if (y%100!=0){
            cout<<"leap year";
        }
        else{
            if(y%400==0)
                cout<<"leap year";
            else
                cout<<"common year";

        }

    }
    else{
        cout<<"common year";
    }
    cout<<endl;
    if((y%4==0)&&(y%100!=0)||(y%400==0))
        cout<<"leap year";
    else
        cout<<"common year";





    return 0;
}
