#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

char to_lower(char a) {
    if(a>='a'&&a<='z')
        a-='a'-'A';
    return a;
}

int compareChar(char a, char b){
    a = to_lower(a);
    b = to_lower(b);
    if(a==b)
        return 0;
    else if(a<b)
        return -1;
    else
        return 1;
}

int checkString(char c1[],char c2[]){
    int sizeA=strlen(c1);
    int sizeB=strlen(c2);
    int sizeMin=min(sizeA,sizeB);
    for(int i = 0;i<sizeMin;i++){
        if(int out = compareChar(c1[i],c2[i]))
            return out;
    }
    if(sizeA==sizeB)
        return 0;
    else if(sizeA<sizeB)
        return -1;
    else
        return 1;
}

int compare(const void *a, const void *b) {
    const char *s1 = *(const char **)a;
    const char *s2 = *(const char **)b;
    return checkString((char *)s1, (char *)s2);
}

int main() {
    const int size=3;
    char arr[size][10]={
        "ahqb",
        "gktf",
        "fgia",
    };
    char *index[size];
    for(int i=0; i<size; i++){
        index[i]=arr[i];
    }

    qsort(index, size, sizeof(char*), compare);

    for(int i=0; i<size; i++){
        cout << index[i] << endl;
    }
    cout << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << endl;
    }

    return 0;
}
