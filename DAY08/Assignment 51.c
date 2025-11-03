#include <stdio.h>

int main() {
    int size, i;

   
    printf("Enter the size of the array: ");
    scanf("%d", &size);

   
    int arr[size];

   
    printf("Enter %d elements into the array:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int even_count = 0;
    int odd_count = 0;

    
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) { 
            even_count++;
        } else { 
            odd_count++;
        }
    }

    
    printf("\nTotal number of even numbers: %d\n", even_count);
    printf("Total number of odd numbers: %d\n", odd_count);

    return 0;
}
