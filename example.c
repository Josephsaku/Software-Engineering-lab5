/* Modified for Software Engineering Lab 5: command-line input and errors. */
#include "tinyexpr.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc > 2) {
        fprintf(stderr, "Usage: %s [expression]\n", argv[0]);
        return 2;
    }
    const char *c = argc == 2 ? argv[1] : "sqrt(5^2+7^2+11^2+(8-2)^2)";
    int error = 0;
    double r = te_interp(c, &error);
    if (error) {
        fprintf(stderr, "Parse error at position %d\n", error);
        return 1;
    }
    printf("Expression: %s\nResult: %.2f\n", c, r);
    return 0;
}
