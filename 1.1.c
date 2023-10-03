#include <stdlib.h>
#include <stdio.h>

int main(void) {
    double A[5] = {
        [0] = 9.0,
        [1] = 2.9,
        [4] = 3.E+25,
        [3] = 0.00007,
    };

    for (size_t i=0; i<5; ++i) {
        printf("elementt %zu is %g, \tits square is %g\n",
                i,
                A[i],
                A[i]*A[i]);
    }
    puts("Press any key to continue...");
    getchar();
    return EXIT_SUCCESS;
}
