#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    
    switch (units <= 100) {
        case 1:  // units <= 100
            bill = units * 5;
            break;

        case 0:  // units > 100
            switch (units <= 200) {
                case 1:  // 101–200 units
                    bill = (100 * 5) + ((units - 100) * 7);
                    break;

                case 0:  // units > 200
                    bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
                    break;
            }
            break;
    }

    printf("Total electricity bill: rs%.2f\n", bill);

    return 0;
}

