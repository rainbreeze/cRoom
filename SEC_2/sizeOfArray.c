#include <stdio.h>

void sizeOfArray()
{
    char c, cA[10];
    int i, iA[10];
    float f, fA[10];
    double d, dA[10];

    printf("size of data type [bytes] \n");
    printf("int = %d, i size = %d\n", sizeof(int), sizeof(i));
    printf("char = %d, c size = %d\n", sizeof(char), sizeof(c));
    printf("float = %d, f size = %d\n", sizeof(float), sizeof(f));
    printf("double = %d, d size = %d\n", sizeof(double), sizeof(d));

    printf("size of array and arrayEl [bytes] \n");
    printf("iA = %d, iA[0] size = %d\n", sizeof(iA), sizeof(iA[0]));
    printf("cA = %d, cA[0] size = %d\n", sizeof(cA), sizeof(cA[0]));
    printf("fA = %d, fA[0] size = %d\n", sizeof(fA), sizeof(fA[0]));
    printf("dA = %d, dA[0] size = %d\n", sizeof(dA), sizeof(dA[0]));

    printf("number of arrayEl \n");
    printf("iA = %d\n", sizeof(iA) / sizeof(iA[0]));
    printf("cA = %d\n", sizeof(cA) / sizeof(cA[0]));
    printf("fA = %d\n", sizeof(fA) / sizeof(fA[0]));
    printf("dA = %d\n", sizeof(dA) / sizeof(dA[0]));
}