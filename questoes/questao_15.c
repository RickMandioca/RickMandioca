// Questão 15:
#include <stdio.h>
#include <stdlib.h>
// troca 2 numeros
void troca(float *a, float *b)
{
    float tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
// ordena a sequencia de numero em ordem crescente
void ordenaNumeros(float *ptr, int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                troca(&ptr[j], &ptr[j + 1]);
            }
        }
    }
}

int main()
{
    float *ptr;
    int n, i;

    printf("Numero de elementos: ");
    scanf("%d", &n);
    // aloca de acordo com o numero de elementos informado
    ptr = (float *)malloc(n * sizeof(float));
    for (i = 0; i < n; i++)
    {
        scanf("%f", &ptr[i]);
        printf("%d elemento: %f\n", i + 1, ptr[i]);
    }

    ordenaNumeros(ptr, n);
    for (i = 0; i < n; i++)
    {
        printf("%d elemento: %f\n", i + 1, ptr[i]);
    }

    free(ptr);
}