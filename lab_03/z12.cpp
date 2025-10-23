#include <iostream>
using namespace std;

int main() {
    int number, count=0;
    cout<<"Enter a number: "<< "\n";
    cin>>number;
    if (number!=0) {
        while (number!=0) {
            number/=10;
            count++;
        }
    }
    else count = 1;
    cout <<"Ilość liczb- " << count << endl;
}