#include "date_time.h"
#include <ctime>
clock_t start;
void start_measure(){
    start=clock();
}
double elapsed_measure(){
    clock_t end=clock();
    return ((double) (end - start)) / CLOCKS_PER_SEC;
}
