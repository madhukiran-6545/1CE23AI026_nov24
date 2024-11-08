#include <stdio.h>

int findFrequency(int arr[], int size, int num) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}

int main() {
    int array[] = {1, 2, 3, 4, 2, 2, 5, 2, 6};
    int number = 2;
    int size = sizeof(array) / sizeof(array[0]);

    int frequency = findFrequency(array, size, number);
    printf("The frequency of %d in the array is: %d\n", number, frequency);

    return 0;
}