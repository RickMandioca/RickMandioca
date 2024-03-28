/*
Questão 4:

1) O primeiro print irá exibir a saída 20, pois ao fazer a atribuição do valor 20 ao conteúdo do ponteiro,
então o valor da variável 'valor' irá ser alterado para 20.

2) O segundo print será 29.0, pelo mesmo motivo do primeiro print, porém aqui, o especificador do formato de saída
é em ponto flutuante e com 1 casa decimal.

3) O que será exibido aqui será a letra 'P', pois o ponteiro p3 está guardando o endereço da primeira letra da string
e o conteúdo do ponteiro está sendo armazenado em aux.

4) Pelo mesmo sentido do print anterior, será exibido a letra 'e', que corresponde ao 4º indíce da string.

5) Ao associar p3 = nome, p3 está guardando o endereço de memória da primeira letra da string, então ao dar o print em seu
conteúdo, utilizando o operador '%c' será impresso a primeira letra de nome que é 'P'.

6) Será impresso na tela a letra 'e', pois ao fazer p3 + 4 o ponteiro irá deslocar 4 posições na memória, como char ocupa
1 bit, então ele irá se deslocar para a letra e, isso é semelhante a fazer p3 = p3[4]

7) Aqui será impresso na tela a letra 't', pois o operador p3--; significa a operação p3 = p3 - 1, ou seja p3 volta
uma posição na memória.

8) p4 irá receber o endereço de memória de onde começa o array vetor, ao atribuir idade ao conteúdo de p4, então irá ser
impresso o primeiro valor de vetor, que é 31.

9) Irá ser impresso a posição p4 + 1, que é a mesma coisa de p4[1], que é a mesma coisa que vetor[1], ou seja o valor '45'.

10) Aqui será impresso 27, pois p5 + 1 será o terceiro valor do array vetor.

11) Será impresso aqui lixo de memória, pois não são definidos valores com índices que não existem, como é o caso do
índice -2.

12) Ao fazer &vetor[2] - 1, significa que p5 apontará para o endereço de memória que está vetor[1], ou seja, será impresso
45.

13) Ao incrementar 1 ao ponteiro p5, o valor que será impresso será 27, que é a posição vetor[2].




*/