#include <stdio.h>

struct C {
    float r;
    float i;
};

int main() {
    struct C n1 = {3, 4};
    struct C n2 = {1, 2};
    struct C s;

    s.r = n1.r + n2.r;
    s.i = n1.i + n2.i;

    printf("Sum = %.0f + %.0fi\n", s.r, s.i);

    return 0;
}
