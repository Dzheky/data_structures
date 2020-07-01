#include <stdio.h>
#include <stdlib.h>
#include "Array.c"
#include "Array.h"


int main() {
    int cap = 10;
    Array * arr;
    arr = initialize_array(cap);
    array_push(arr, 110);
    array_push(arr, 550);

    printf("%d and %d\n", array_get(arr, 0), array_get(arr, 1));
    return 0;
}
