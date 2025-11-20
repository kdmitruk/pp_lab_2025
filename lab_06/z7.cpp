#include <iostream>

using namespace std;

void swap_letter (char text[]){
    char dist = 'a' - 'A';
    for(int i=0; text[i]!='\0'; i++)
        if (text[i] >= 'A' && text[i] <= 'Z')
            text[i] += dist;
        else if(text[i] >= 'a' && text[i] <= 'z')
            text[i] -= dist;
}

int main(){
    char text[] = "Ala ma kota Bartka";
    swap_letter(text);
    cout<<text<<endl;
 return 0;
}
