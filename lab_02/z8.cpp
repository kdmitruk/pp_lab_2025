#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    cin >> a;
    cout << fabs(a) << endl;
    if(a < 0)
        a = -a;
    cout << a;

    return 0;
}
