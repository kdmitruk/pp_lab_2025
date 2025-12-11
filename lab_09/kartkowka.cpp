#include <iostream>

using namespace std;

int* find_equal_subseq(int* arr, unsigned int size, unsigned int m)
{
    for (int i = 0; i <= size - m; ++i) {
        bool equal = true; int* start = arr + i;
        for (int j = 1; j < m; ++j) {
            if (*start != *(start + j)) {
                equal = false;
                break;
            }
        }
        if (equal) {
            return start;
        }
    }
    return arr + size;
}

void print_all_subseq_indices(int* arr, unsigned int size, unsigned int m)
{
    int* current = arr;
    int* end = arr + size;
    int* ptr = find_equal_subseq(current, end - current, m);
    while (ptr != end)
    {
        cout << (ptr - arr) << endl;
        current = ptr+1;
        ptr = find_equal_subseq(current, end - current, m);
    }
}

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 3, 4, 4, 4, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int m = 3;
    print_all_subseq_indices(arr, size, m);
    return 0;
}
