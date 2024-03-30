/*
Questão 7:

A primeira expressão é válida, pois p = mat + 1 aponta para o segundo elemento do vetor mat.
A segunda e a terceira expressão são válidas, pois p = mat aponta para o primeiro elemento do vetor mat.
A última expressão ela é válida se, previamente, o conteúdo do vetor mat for declarado, pois x = (*mat) mostra o conteúdo do primeiro elemento
do vetor mat, se não for declarado esse conteúdo, x terá lixo de memória.

*/