#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

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

void convolution(unsigned char arr[5][10], int rows, int cols){
    unsigned char temp_arr[5][10];
    unsigned int sum, counter;

    for(int y = 0; y < rows; y++){
        for(int x = 0; x < cols; x++){
            sum=0;
            counter=0;
            for(int ly=y-1; ly<=y+1; ly++){
                if(ly>=0 && ly<rows){
                    for(int lx=x-1; lx<=x+1; lx++){
                        if(lx>=0 && lx<cols){
                            sum += arr[ly][lx];
                            counter++;
                        }
                    }
                }
            }
            temp_arr[y][x]=round((float)sum/counter);
        }
    }

    memcpy(arr, temp_arr, sizeof(unsigned char)*rows*cols);
}

int main(){
    const int ROWS = 5;
    const int COLS = 10;

    unsigned char arr[ROWS][COLS];
    populate_arr((unsigned char*)arr, ROWS, COLS);
    show_arr((unsigned char*)arr, ROWS, COLS);

    cout<<endl;

    convolution(arr, ROWS, COLS);
    show_arr((unsigned char*)arr, ROWS, COLS);


    return 0;
}
