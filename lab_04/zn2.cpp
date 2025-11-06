#include <cstdio>
#include <cstring>

int main() {
    //char t[6]={'H','E','L','L','O',0};
    //char t[6]="HELLO";
    char t[2137];
    scanf("%2136[^\n]s",t);
    printf("%s\n",t);
    //printf("%lu", strlen(t));
    //printf("%lu", sizeof(t));
    int i;
    for (i=0; t[i]!='\0'; i++ ) {}
    printf("%i ", i);

    return 0;
}