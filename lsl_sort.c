//
// Created by lishoulin on 18/4/27.
//

#include <stdio.h>
#include <time.h>
#include "lsl_sort.h"

#define LEN 5
int arrays[LEN] = {10, 5, 2, 4, 7};

void insert_sort();

int *returenarray();


int main() {
    insert_sort();
    int *arr = returenarray();
    printf("%d \n", arr[0]);
    zhizhen();
    return 0;
}


void insert_sort() {
    int key, j;
    for (int i = 0; i < LEN; ++i) {
        printf("%d, %d, %d, %d, %d\n", arrays[0], arrays[1], arrays[2], arrays[3], arrays[4]);
        key = arrays[i]; //i=1 key=5
        j = i - 1;//j=0
        while (j >= 0 && arrays[j] > key) {
            arrays[j + 1] = arrays[j];
            --j;
        }
        arrays[j + 1] = key;//arr[0]=10
    }
    printf("%d, %d, %d, %d, %d\n", arrays[0], arrays[1], arrays[2], arrays[3], arrays[4]);


}

int *returenarray() {

    return arrays;
}

union Data {
    int i;
    float f;
    char str[20];
}data;

void zhizhen() {

    int var;
    int *ptr;
    int **pptr;
    var = 3000;
    ptr = &var;
    pptr = &ptr;


    printf("%d \n", var);
    printf("%d \n", *ptr);
    printf("%d \n", **pptr);

    void (*p)()=&insert_sort;

    p();


    union Data data;

}