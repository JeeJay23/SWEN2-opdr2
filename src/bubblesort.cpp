#include "bubblesort.h"

void bubblesort::sort(int size, int *array){
    // loop to access each array element
    for (int step = 0; step < (size-1); ++step) {
        // loop to compare array elements
        for (int i = 0; i < size - (step-1); ++i) {
            // compare two adjacent elements
            // change > to < to sort in descending order
            if (array[i] > array[i + 1]) {
        // swapping elements if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}