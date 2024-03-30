/*
Questão 13:

O memory leak acontece quando um programa aloca dinamicamente memória mas não libera ela.

Exemplo 1:

Aqui acontece memory leak pois é utilizado o malloc e não é liberado a memória com o free depois.
int main() {
    int *x;

    x = (int *)malloc(sizeof(int));

    printf("%p\n", x)
}

Exemplo 2:

Nesse exemplo, no loop infinito sempre vão ser criados ponteiros e eles serão alocados na memória, porém nunca são liberados com o free,
ocasionando em memory leak.
int main() {
    while (1) {
        int *ptr = (int *)malloc(sizeof(int));
    }
}

Exemplo 3:

Nesse exemplo, o memory leak acontece pois na funcaoTeste deveria ter liberado o uso da memória no final da função.
void funcaoTeste() {
    int *x = (int *)malloc(sizeof(int));
}

int main() {
    funcaoteste();
}
*/
