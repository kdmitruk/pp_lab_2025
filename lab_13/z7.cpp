#include <iostream>
#include <cmath>
using namespace std;



struct Complex{
    double im, re;


};

double abs(const struct Complex& value){
    return hypot(value.im, value.re);

}

Complex add(const struct Complex& a, const struct Complex& b ){
    return Complex{
        a.im + b.im,
        a.re + b.re
    };
}

int main(){
    Complex *a = new Complex {1,2};
    Complex *b = new Complex {3,4};
    Complex c = add(*a,*b);
    cout<<"abs"<<abs(*a)<<endl;
    cout<<"add "<<c.im<<" "<<c.re;
    delete a;
    delete b;

    return 0;
}
