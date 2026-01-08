#include <cmath>
#include "trigonometry.h"

float deg2rad(float deg) {
    return deg * M_PI/180;
 }

float sinus(float rad){
    float result = rad;
    const float eps = 1e-6;
    float nom = rad;
    float denom = 1;
    int sign = -1;
    float term;
    int n = 1;
    do {
        nom *= rad*rad;
        denom *= (n+1) * (n+2);
        term = nom/denom;
        result += sign*term;
        n += 2;
        sign *= -1;
    } while (term > eps);

    return result;


}

