/* This compiles in gcc via "gcc -o 1.1.exe 1.1.c". Gcc adds necessary includes and
does not care about void main returning an integer. The -Werror flag stopps 
the program from compiling. This program is faulty by construction. */
void main () {
    int i;
    double A[5] = {
        9.0,
        2.9,
        3.E+25,
        .00007,
    };

    for (i = 0; i < 5; ++i) {
        printf("element %d is %g, \tits square is %g\n",
                i,
                A[i],
                A[i]*A[i]);
    }
    puts("Press any key to continue...");
    getchar();
    return 0;
}
