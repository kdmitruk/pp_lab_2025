#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void show_arr(unsigned char* arr, int rows, int cols){
    for(int y = 0; y < rows; y++){
        for(int x = 0; x < cols; x++){
            cout << setw(3) << (unsigned int) arr[cols*y+x]<< " ";
        }
        cout << endl;
    }
}

void populate_arr(unsigned char* arr, int rows, int cols){
    int size = rows*cols;
    int limit = pow(2, (sizeof(unsigned char))*8);
    for(int i=0; i<size; i++){
        arr[i] = rand() % limit;
    }
}

int main(){
    const int ROWS = 5;
    const int COLS = 10;

    unsigned char arr[ROWS][COLS];
    populate_arr((unsigned char*)arr, ROWS, COLS);
    show_arr((unsigned char*)arr, ROWS, COLS);

    return 0;
}
