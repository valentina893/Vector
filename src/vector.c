// vector.c

#include <stdlib.h>

#include "../inc/vector.h"

vector vector_create(size_t capacity) {
    return (vector){0, capacity, (void**)malloc(sizeof(void*) * capacity)};
}

void vector_push(vector* vector, void* new_data) {
    if (vector->size == vector->capacity) { // resizing
        vector->capacity *= 2;
        vector->data = (void**)realloc(vector->data, sizeof(void*) * vector->capacity);
    }
    vector->data[vector->size++] = new_data;
}

void vector_remv(vector* vector, size_t idx) {
    return;
}

void* vector_at(vector* vector, size_t idx) {
    if (idx >= vector->size) return NULL;
    return vector->data[idx];
}

void vector_delete(vector* vector) {
    free(vector->data);
}