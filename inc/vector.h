// vector.h

#include <stdlib.h>

// General purpose dynamic array to mimic std::vector in C++.
// - All stored elements must be a pointer/reference to that data type.
typedef struct vector {

	size_t size;
	size_t capacity;
	void** data;

} vector;

// Initialization of vector struct.
vector vector_create(size_t capacity);

// Appends to the end of the array, resizes if necessary. Required void* typecast.
void vector_push(vector* vector, void* new_data);

// Removes element at specified index of array.
void vector_remv(vector* vector, size_t idx);

// Returns data at specific index within array. Requires pointer typecast.
void* vector_at(vector* vector, size_t idx);

// Cleans up vector struct.
void vector_delete(vector* vector);
