#include <iostream>

using namespace std;

int main()
{
    char c;
    cin >> c;
    bool is_lower = c >= 'a' && c <= 'z';


    if (is_lower)
       cout<<"true";
    else
       cout<<"false";
    cout << endl;

    cout << (is_lower ? "true":"false");
    cout << endl;

    cout << boolalpha<<is_lower;
    cout << endl;




    return 0;
}
