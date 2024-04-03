// Questão 24
#include <stdio.h>

int main()
{
    int i, j;
    // declara matriz 8x8
    unsigned char m[8][8] = {
        {1, 1, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 1, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1}};
    // declara variavel long long estado para caber os 64 bits da matriz de pontos
    unsigned long long estado = 0;
    // percorre cada elemento da matriz, começando da primeira linha, cada elemento fara a operacao OU com a variavel estado que tem o valor
    // 0, e logo apos, estado sofre shiftleft para que as primeiras linhas da matriz sejam os bits mais significativos
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            // necessario conversao de char para long long para que seja possivel fazer operacao 64 com 64 bits
            estado = estado | (unsigned long long)m[i][j];
            estado = estado << 1;
        }
    }
    // variavel para dar print no numero de bytes
    int pos_byte = 1;
    // imprime sequencia de bits
    for (int i = 63; i > 0; i--)
    {
        // necessario converter para char para dar print em 1 bit
        printf("%d", (char)((estado >> i) & 1));
        if (pos_byte % 8 == 0)
        {
            printf(" %d ", pos_byte / 8);
        }
        pos_byte++;
    }
    printf(" 8");
}