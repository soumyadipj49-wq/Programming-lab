#include <stdio.h>

int main() {
    int n = 3;  
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i + 1; j++) {
            printf("%d ", j);
        }

        
        int spaces = (i - 1) * 2 - 1;  
        for (int s = 1; s <= spaces; s++) {
            printf("  "); 
        }

        
        for (int j = n - i + 1; j >= 1; j--) {
            
            if (i == 1 && j == n - i + 1)
                continue;
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}

