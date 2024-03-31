// Questão 16:
#include <stdio.h>
#include <stdlib.h>

// funcao compara
int compara(const void *a, const void *b)
{
    // retorna > 0 se a for maior que b, = 0 se a = b, e < 0 se b > a
    return (*(int *)a - *(int *)b);
}

int main()
{
    float *ptr;                                             // ponteiro para a sequencia
    int n, i, (*ptr_compara)(const void *a, const void *b); // n elementos, ponteiro para a função compara

    // quantidade de elementos
    printf("Numero de elementos: ");
    scanf("%d", &n);

    // apontar ponteiro ptr_compara para a funcao compara
    ptr_compara = compara;
    // alocar a sequencia de n elementos
    ptr = (float *)malloc(n * sizeof(float));
    for (i = 0; i < n; i++)
    {
        // digitar os n elementos
        scanf("%f", &ptr[i]);
        // imprime o elemento digitado
        printf("%d elemento: %f\n", i + 1, ptr[i]);
    }

    // usar a funcao qsort que usa como argumentos, o endereço que começa a sequencia, a quantidade de elementos, o tamanho dos elementos
    // e um ponteiro para a funcao de comparacao
    qsort(ptr, n, sizeof(float), ptr_compara);
    printf("Sequencia ordenada:\n");
    for (i = 0; i < n; i++)
    {
        // imprime na tela a sequencia ordenada
        printf("%d elemento: %f\n", i + 1, ptr[i]);
    }
    // libera o espaço de memoria alocado para ptr
    free(ptr);
}