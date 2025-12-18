#include <iostream>
#include <iomanip>

using namespace std;

void show_arr(int* arr, int rows, int cols){
    for(int y = 0; y < rows; y++){
        for(int x = 0; x < cols; x++){
            cout << setw(3) << hex << arr[cols*y+x]<< " ";
        }
        cout << endl;
    }
}

int main() {
    const int ROWS = 20;
    const int COLS = 10;
    int arr[ROWS][COLS];

    for(int y = 0; y < ROWS; y++){
        for(int x = 0; x < COLS; x++){
            arr[y][x] = (y+1) * (x+1);
        }
    }

    show_arr((int*)arr, ROWS, COLS);

    return 0;
}
