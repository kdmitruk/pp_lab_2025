#include <cstdio>
#include <climits>
#include <algorithm>
#include <iostream>

using namespace std;

int get_max_gain(int prices[], int size, int& buy_day, int& sell_day) {
    if (size < 2) {
        buy_day = sell_day = -1;
        return 0;
    }

    int min_price = INT_MAX;
    int max_gain = 0;
    
    int min_price_ind = -1; 
    
    for (int i = 0; i < size; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
            min_price_ind = i;
        }

        int potential_gain = prices[i] - min_price;

        if (potential_gain > max_gain) {
            max_gain = potential_gain;
            buy_day = min_price_ind; 
            sell_day = i;         
        }
    }
    
    if (max_gain == 0) {
        buy_day = sell_day = -1;
    }

    return max_gain;
}

int main() {
    //int data[] = {10, 12, 20, 8, 16, 6, 14, 18, 1};
    int data[] = {12, 11, 10};
    int size = sizeof(data) / sizeof(data[0]);
    
    int buy_index = -1;
    int sell_index = -1;

    int gain = get_max_gain(data, size, buy_index, sell_index);
    cout << gain << endl << buy_index << endl << sell_index << endl;

    return 0;
}
