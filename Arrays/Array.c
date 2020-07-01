//
// Created by Evgeny Klimenchenko on 09/06/2020.
//

#include "Array.h"
#include <stdio.h>

Array * initialize_array(int cap) {
    Array * arr = malloc(sizeof(Array));
    check_pointer(arr);
    arr->capacity = cap;
    arr->length = 0;
    arr->data = (int *)malloc(sizeof(int) * cap);

    check_pointer(arr->data);

    return arr;
}

void array_push(Array * arr, int item) {
    if (arr->length < arr->capacity) {
        *(arr->data + arr->length) = item;
        arr->length += 1;
    }
}

int array_get(Array * arr, int index) {
    return *(arr->data + index);
}

void check_pointer(void * p) {
    if (p == NULL) {
        printf("ERROR Allocating memory");
        exit(EXIT_FAILURE);
    }
}