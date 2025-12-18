#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <thread>

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

unsigned char& at(unsigned char* arr, int y, int x, int cols) {
    return arr[cols*y+x];
}

void convolution(unsigned char* arr, int rows, int cols){
    unsigned char* temp_arr = new unsigned char[rows*cols];
    unsigned int sum, counter;

    for(int y = 0; y < rows; y++){
        for(int x = 0; x < cols; x++){
            sum=0;
            counter=0;
            for(int ly=y-1; ly<=y+1; ly++){
                if(ly>=0 && ly<rows){
                    for(int lx=x-1; lx<=x+1; lx++){
                        if(lx>=0 && lx<cols){
                            sum += at(arr, ly, lx, cols);
                            counter++;
                        }
                    }
                }
            }
            at(temp_arr, y, x, cols)=round((float)sum/counter);
        }
    }
    memcpy(arr, temp_arr, sizeof(unsigned char)*rows*cols);
    delete[] temp_arr;
}

void loop(unsigned char* arr, int rows, int cols){
    for(int i=0; i<100; i++) {
        convolution(arr, rows, cols);
        cout<<endl;
        show_arr(arr, rows, cols);
        std::this_thread::sleep_for(500ms);
    }
}

int main(){
    const int ROWS = 5;
    const int COLS = 10;

    unsigned char arr[ROWS][COLS];
    unsigned char* arr_as_1d = (unsigned char*)arr;
    populate_arr(arr_as_1d, ROWS, COLS);
    show_arr(arr_as_1d, ROWS, COLS);
    loop(arr_as_1d, ROWS, COLS);

    return 0;
}
