#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;

    bool is_triangle =
        a+b>c &&
        a+c>b &&
        b+c>a;

    cout << (is_triangle ? "true":"false");

    return 0;
}
