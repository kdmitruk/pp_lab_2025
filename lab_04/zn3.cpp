#include <cstdio>
#include <cstring>

int main() {
    const int SIZE = 2137;
    char in[SIZE];
    char out[SIZE];

    scanf("%2136[^\n]s",in);
    printf("%s\n",in);

    //strcpy(out, in);
    //printf("%s\n", out);
    int i;
    for (i=0; in[i]!='\0'; i++ ) {
        out[i]=in[i];
    }
    out[i] = '\0';
    //printf("%i ", i);
    printf("%s\n", out);

    return 0;
}
