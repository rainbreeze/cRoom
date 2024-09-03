#include "header.h"

int main() {
    printf("--------------------------------\n");
    clock_t start, finish;
    double duration;

    start = clock();
    int array[7] = {1,2,5,7,22,41,2};
    int n = 7;
    printf("answer = %d\n", has_duplicate_elem(array, n));
    finish = clock();

    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("duration = %f\n", duration);
    return 0;
}
