#include <cstdio>
#include <cstring>

int main() {
    char t[] = "HELLOWORLD";
    printf("%s\n",t);
    // printf("%s", strchr(t, 'R'));
    //
    // printf("%ld", strchr(t, 'R')-t);
    int i;
    char g = 'q';
    bool found = false;
    for (i=0; t[i]!='\0'; i++ ) {
        if (t[i]==g) {
            printf("%d", i);
            found = true;
            break;
        }
    }
    if (found==false) { //!found
        printf("-1");
    }


    return 0;
}