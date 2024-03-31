// Questão 19:
#include <stdio.h>
#include <stdlib.h>
// funcao soma_vetores, que recebe o ponteiro vet1, ponteiro vet2, ponteiro resultado, e numero de elementos n
void soma_vetores(const int *vet1, const int *vet2, int *resultado, int n)
{
    int i;
    // soma elemento por elemento
    for (i = 0; i < n; i++)
    {
        resultado[i] = vet1[i] + vet2[i];
    }
}

int main()
{
    int n, i;
    int *ptr_vet1, *ptr_vet2, *ptr_result;
    // declara numero de elementos
    printf("Numero de elementos: ");
    scanf("%d", &n);
    // aloca dinamicamente os ponteiros para a quantidade n de elementos
    ptr_vet1 = (int *)malloc(n * sizeof(int));
    ptr_vet2 = (int *)malloc(n * sizeof(int));
    ptr_result = (int *)malloc(n * sizeof(int));
    // preenche os vetores 1 e 2
    printf("Preencha o vetor 1:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d elemento: ", i + 1);
        scanf("%d", &ptr_vet1[i]);
    }

    printf("Preencha o vetor 2:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d elemento: ", i + 1);
        scanf("%d", &ptr_vet2[i]);
    }
    // chama a funcao soma_vetores
    soma_vetores(ptr_vet1, ptr_vet2, ptr_result, n);
    // exibe o resultado da operacao elemento a elemento
    printf("O resultado da operacao foi: [");
    for (i = 0; i < n; i++)
    {
        printf("%d", ptr_result[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("]");
    // libera o espaco da memoria alocada
    free(ptr_vet1);
    free(ptr_vet2);
    free(ptr_result);
}