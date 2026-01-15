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
int main() {

    char s1[10]="aaade";
    char s2[10]="aacde";

    cout<<checkString(s1,s2);
    return 0;

}
