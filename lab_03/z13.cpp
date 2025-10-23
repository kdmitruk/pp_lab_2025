#include <iostream>
using namespace std;

int main() {
    int number, sum=0;
    cout<<"Enter a number: "<< "\n";
    cin>>number;
    while (number!=0) {
        sum+=number%10;
        number/=10;

    }

    cout <<"Suma liczb "<< abs(sum) << endl;
}