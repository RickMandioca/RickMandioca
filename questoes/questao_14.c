/*
Questão 14:

Ponteiro para função é um ponteiro que aponta para o endereço de memória de uma função, podendo ser utilizado assim como se chama uma função.
*/

#include <stdio.h>
// Declara a função
int funcaoTeste(int a, int b)
{
    return a + b;
}

int main()
{
    // declara o ponteiro (*nome_do_ponteiro)(args), declara o resultado que será retornado
    int (*pont_func)(int a, int b), resultado;

    // aponta o ponteiro para a função
    pont_func = funcaoTeste;
    // pont_func retorna o resultado da operação a + b da funcaoTeste, após isso armazena em resultado
    resultado = pont_func(2, 3);

    printf("%d\n", resultado);
}
