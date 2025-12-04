#include <iostream>

using namespace std;

int string_size(char *txt){
    int counter=0;
    while (*txt!='\0'){
        txt++;
        counter++;
    }
    return counter;
}

int string_sizeV2(char *txt){
    if(*txt == '\0') return 0;
    return string_sizeV2 (txt+1) +1;
}

int main() {
    char text[] = "Hello World";
    cout<<string_size(text)<<endl;
    cout<<string_sizeV2(text);


    return 0;
}
