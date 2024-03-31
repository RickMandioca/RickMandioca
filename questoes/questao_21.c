/*
Questão 21:

O trecho que possui um memory leak é da letra C, pois, na função f, se a condição dentro do if for satisfeita, então a função já irá encerrar
sua execução através do return, ou seja, o trecho do código em que há o free(s) não será executado, ocasionando em vazamento de memória.

*/