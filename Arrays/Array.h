//
// Created by Evgeny Klimenchenko on 09/06/2020.
//

#ifndef DATA_STRUCTURES_ARRAY_H
#define DATA_STRUCTURES_ARRAY_H

typedef struct Array {
    int capacity;
    int length;
    int * data;
} Array;

// initialize array with initial capacity
Array * initialize_array(int capacity);

void check_pointer(void * p);

void array_push(Array *, int);

int array_get(Array * arr, int index);

#endif //DATA_STRUCTURES_ARRAY_H
