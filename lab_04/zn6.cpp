#include <cstdio>
#include <cstring>

int main() {
    char text[] = "Ala ma kota";
    char pattern[] = "kot";
    //printf("%s", strstr(text, pattern));
    for (int i=0; text[i]; i++) {
        bool found = true;
        for (int j=0; pattern[j]; j++) {
            if (text[i+j] != pattern[j]) {
                found = false;
                break;
            }

        }
        if (found) {
            printf("%d %s",  i, text + i);
            break;
        }
    }




    return 0;
}