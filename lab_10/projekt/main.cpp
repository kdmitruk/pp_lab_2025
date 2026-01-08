#include <iostream>
#include <cmath>

#include "trigonometry.h"
#include "date_time.h"

using namespace std;

int main()
{
    float result;
    float rad=deg2rad(63);
    start_measure();
    result=sinus(rad);
    cout<<elapsed_measure()<<" "<<result<<std::endl;
    start_measure();
    result=sin(rad);
    cout<<elapsed_measure()<<" "<<result;
    return 0;
}
