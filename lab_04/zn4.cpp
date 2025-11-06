#include <iostream>
#include <cstring>

int main() {
    char t1[100]="abcd";
    char t2[100]="abcf";

    printf("%d\n",strcmp(t1,t2));
    int result=0;
    int i;
    for (i=0; t1[i]!='\0'||t2[i]!='\0'; i++) {
        if (t1[i]<t2[i]) {
            result=-i;
            break;
        }
        if (t1[i]>t2[i]) {
            result=i+1;
            break;
        }
    }

    if (result!=0) {
        printf("%d", result);
    }
    else {
        if (t1[i]=='\0'&&t2[i]=='\0') {
            printf("0");
        }
        else {
            if (t1[i]=='\0') {
                printf("-%d", i);
            }
            else {
                printf("%d", i+1);
            }
        }
    }




    return 0;
}