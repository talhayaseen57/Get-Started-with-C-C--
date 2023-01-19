#include <stdio.h>
#include <stdlib.h>

int main() {
    int* array;
    array = (int*) malloc(4 * sizeof(int));

    if (array == NULL) {
        printf("Program couldn't allocate memory.");
        return 0;
    }
    
    printf("Enter the numbers:\n");

    int i = 0;
    while (1) {
        scanf("%d", (array+i));

        if(*(array+i) == 0) break;

        if(i == (sizeof(array)/sizeof(int))) {
            array = realloc(array, 4*sizeof(int));
        }

        i++;
    }
    
    int size = i;
    printf("Size of array = %ld\n", sizeof(array)/sizeof(int));

    for(i=0; i<size; i++) {
        printf("%d ", *(array+i));
    }

    free(array);    
    return 0;
}