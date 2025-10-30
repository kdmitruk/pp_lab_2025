#include <iostream>

int main() {
    const int SIZE = 7;
    int tab[7] = {64, 34, 25, 12, 22, 11, 90};

    for (int i = 0; i < SIZE - 1; ++i) {
        for (int j = 0; j < SIZE - i - 1; ++j) {
            if (tab[j]%2 !=0 && tab[j+1]%2 ==0) {
                std::swap(tab[j], tab[j + 1]);
            }
        }
    }

    for (int i = 0; i < SIZE; ++i) {
        std::cout << tab[i] << " ";
    }
    std::cout << "\n";

    return 0;
}