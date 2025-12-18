#include <iostream>
#include <iomanip>



using namespace std;



void show_arr(int arr[][16], int SIZE){

    for(int y = 0; y < SIZE; y++){
        for(int x = 0; x < SIZE; x++){
            cout << setw(3) << hex << arr[y][x]<< " ";

        }
        cout << endl;
    }


}

int main() {
    const int SIZE = 16;
    int arr[SIZE][SIZE];

    for(int y = 0; y < SIZE; y++){
        for(int x = 0; x < SIZE; x++){
            arr[y][x] = (y+1) * (x+1);

        }
    }
    show_arr(arr, SIZE);

    return 0;
}
