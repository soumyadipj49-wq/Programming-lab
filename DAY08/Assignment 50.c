#include <stdio.h>

int main() {
    int arr[100]; 
    int n, i;
    int max, min;

  
    printf("Enter No of element: ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

   
    max = arr[0];
    min = arr[0];

    
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
        if (arr[i] < min) {
            min = arr[i]; 
        }
    }

  
    printf("\nMaximum element i: %d\n", max);
    printf("Minimum element : %d\n", min);

    return 0;
}
