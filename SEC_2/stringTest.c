#include <stdio.h>
#include <string.h>

void stringTest()
{
    char s1[16] = "hello World";
    char s2[16] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
    char s3[] = "hello World";
    char s4[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
    char s5[20];

    strcpy_s(s5, 20, s1);

    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("s3: %s\n", s3);
    printf("s4: %s\n", s4);
    printf("s5: %s\n", s5);
    printf("s1 length: %d \n", strlen(s1));
}