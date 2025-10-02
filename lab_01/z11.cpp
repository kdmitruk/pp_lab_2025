#include <cstdio>
/*
int main(){
    int h1,m1;
    scanf("%d:%d",&h1,&m1);
    int h2,m2;
    scanf("%d:%d",&h2,&m2);

    m1=m1+(h1*60);
    m2+=h2*60;
    printf("%d",m2-m1);
}
*/
int main(){
    int h1,m1;
    scanf("%d:%d",&h1,&m1);
    m1=m1+(h1*60);
    int m2;
    scanf("%d:%d",&h1,&m2);
    m2+=h1*60;
    printf("%d",m2-m1);
}
