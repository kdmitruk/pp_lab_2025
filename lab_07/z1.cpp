#include <iostream>

using namespace std;

int bit_at(int value,int pos){
    for(int i=0;i<pos;i++)
        value/=2;
    return value%2;


}

int bit_at_v2(int value, int pos){
    value >>= pos;
    return value & 1;
}
int main()
{
    int value;
    value = 100;

    cout << bit_at(value,2) << endl;
    cout << bit_at_v2(value,2);
    return 0;

}
