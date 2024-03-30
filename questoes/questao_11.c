/*
Questão 11:

Se x for char, então ele avançará 1 byte na memória, então x + 1: 4093 x + 2: 4094 x + 3: 4095.
Se x for int, então ele avançará 2 byte na memória, então x + 1: 4094 x + 2: 4096 x + 3: 4098.
Se x for float, então ele avançará 4 byte na memória, então x + 1: 4096 x + 2: 4100 x + 3: 4104.
Se x for double, então ele avançará 8 byte na memória, então x + 1: 4100 x + 2: 4108 x + 3: 4116.

*/
#include <stdio.h>

int main()
{
    char x1[4];
    int x2[4];
    float x3[4];
    double x4[4];

    printf("Endereco de x1: %d x + 1: %d x + 2: %d x + 3: %d\n", &x1, x1 + 1, x1 + 2, x1 + 3);
    printf("Endereco de x2: %d x + 1: %d x + 2: %d x + 3: %d\n", &x2, x2 + 1, x2 + 2, x2 + 3);
    printf("Endereco de x3: %d x + 1: %d x + 2: %d x + 3: %d\n", &x3, x3 + 1, x3 + 2, x3 + 3);
    printf("Endereco de x4: %d x + 1: %d x + 2: %d x + 3: %d\n", &x4, x4 + 1, x4 + 2, x4 + 3);
}