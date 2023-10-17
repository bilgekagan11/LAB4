#include <stdio.h>
int findMostFrequent(int arr[], int size) {
    int maxCount = 0;
    int mostFrequent = arr[0];
    int i, j;

    for (i = 0; i < size; i++) {
        int count = 0;
        for (j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

    return mostFrequent;
}


