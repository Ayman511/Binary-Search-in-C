#include <stdio.h>

/* Macros */
#define ARRAY_SIZE 10

/* Prototypes */
int binarySearch(int arr[], int startIndex, int endIndex, int nbr);

int main(){
    int arr[ARRAY_SIZE] = {3, 5, 7, 10, 23, 42, 47, 80};
    int startIndex = 0;
    int endIndex = ARRAY_SIZE - 1, result = 0;

    result = binarySearch(arr, startIndex, endIndex, 7);
    /* We check returned value */
    (result == -1) ? printf("Element was not found...")
                    : printf("Element was found in index %d", result);
}

int binarySearch(int arr[], int startIndex, int endIndex, int nbr){
    int middle = 0;
    while(endIndex >= startIndex){
        middle = (startIndex + endIndex) / 2;

       if(*(arr + middle) == nbr)
           return middle;
       else if(*(arr + middle) < nbr)
           return binarySearch(arr, middle + 1, endIndex, nbr);
       else
           return binarySearch(arr, startIndex, middle - 1, nbr);
    }
    /* If we reach here then we did not found element in the array */
    return -1;
}





