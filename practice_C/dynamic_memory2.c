#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 10
#define GROWTH_FACTOR 2

typedef struct {
    int *data;
    int size;
    int capacity;
} Array;

void initArray(Array *a, int initialCapacity) {
    a->data = (int *)malloc(initialCapacity * sizeof(int));
    a->size = 0;
    a->capacity = initialCapacity;
}

void freeArray(Array *a) {
    free(a->data);
    a->data = NULL;
    a->size = 0;
    a->capacity = 0;
}

void resizeArray(Array *a, int newCapacity) {
    int *newData = (int *)malloc(newCapacity * sizeof(int));
    for (int i = 0; i < a->size; i++) {
        newData[i] = a->data[i];
    }
    free(a->data);
    a->data = newData;
    a->capacity = newCapacity;
}

void insertArray(Array *a, int element) {
    if (a->size == a->capacity) {
        resizeArray(a, a->capacity * GROWTH_FACTOR);
    }
    a->data[a->size] = element;
    a->size++;
}

void deleteArray(Array *a, int index) {
    for (int i = index; i < a->size - 1; i++) {
        a->data[i] = a->data[i + 1];
    }
    a->size--;
}

int searchArray(Array *a, int element) {
    for (int i = 0; i < a->size; i++) {
        if (a->data[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    /*
    In this example, we define a struct Array to represent our dynamic array. 
    The struct has three fields: data, which stores the elements of the array, 
    size, which stores the number of elements in the array, and capacity, which 
    stores the total capacity of the array.

    The initArray function is used to initialize a new dynamic array with a given 
    initial capacity. The freeArray function is used to free the memory allocated 
    for the array when we are done using it.

    The resizeArray function is used to resize the array when it becomes full. It 
    creates a new array with the given new capacity and copies the elements from the 
    old array to the new array. It also frees the memory allocated for the old array.

    The insertArray function is used to insert an element into the array. It first 
    checks if the array is full, and if so, it calls the resizeArray function to resize 
    the array. Then it adds the element to the array and increments the size.

    In the main function, we create an instance of the Array struct and initialize it 
    with an initial capacity. Then we insert 100 elements into the array and print the 
    size and capacity of the array.

    In the deleteArray function, we shift all the elements to the right of the index one 
    position to the left and decrement the size of the array by 1. This will delete the element 
    at the given index.

    In the searchArray function, we iterate through the elements of the array and return the 
    index of the first element that matches the given element. If the element is not found in 
    the array, the function returns -1.

    It's worth noting that this is just an example, and you can adjust the initial capacity, 
    growth factor and the size of the array to suit your specific needs. It's also important to 
    consider the memory usage and performance trade-offs when choosing the initial capacity and 
    growth factor. A larger initial capacity will reduce the number of resizing operations, but 
    it will also use more memory. A larger growth factor will increase the capacity of the array 
    more quickly, but it will also increase the memory usage. Therefore, you should choose the 
    values that are appropriate for your specific use case.
    */
    Array a;
    initArray(&a, INITIAL_CAPACITY);
    for (int i = 0; i < 100; i++) {
        insertArray(&a, i);
    }
    int index = searchArray(&a, 5);
    if(index != -1) {
        deleteArray(&a, index);
    }
    printf("Array size: %d\n", a.size);
    printf("Array capacity: %d\n", a.capacity);
    freeArray(&a);
    return 0;
}