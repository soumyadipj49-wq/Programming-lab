#include <stdio.h>

struct Distance {
    int feet;
    int inch;
};

int main() {
    struct Distance d1, d2, total;

    d1.feet = 900;
    d1.inch = 9;

    d2.feet = 500;
    d2.inch = 5;

    total.inch = d1.inch + d2.inch;
    total.feet = d1.feet + d2.feet;

    if (total.inch >= 12) {
        total.feet = total.feet + (total.inch / 12);
        total.inch = total.inch % 12;
    }

    printf("Total distance = %d feet %d inches\n", total.feet, total.inch);

    return 0;
}
