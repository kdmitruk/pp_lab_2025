#include <cstdio>
enum Weekday{Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday=0};

int main(){
    int d;
    int m;
    int y;
    scanf("%d.%d.%d",&d,&m,&y);
    // 15 października 1582 roku
    Weekday weekday=static_cast<Weekday>((d+=m<3?y--:y-2,23*m/9+d+4+y/4-y/100+y/400)%7);
    printf("%d",weekday);

}
