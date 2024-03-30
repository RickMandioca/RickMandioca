/*
Questão 5:

Todas as respostas obtidas, durante a execução do código, foram esperadas. O primeiro print informa o índice i, o segundo print o valor do vetor
na posição i, o terceiro print o conteúdo do ponteiro f deslocado do índice i, que deve ser o mesmo valor que o vetor no mesmo índice, e os dois
últimos o endereço de memória tanto do vetor quanto do ponteiro, que devem ser os mesmos.

Porém, há um problema no código, nos dois últimos prints, há um uso do operador '%X', esse operador espera um argumento do tipo unsigned int, e
converte em hexadecimal, esse jeito não é o jeito mais apropriado para mostrar o endereço de memória pois os argumentos não do tipo unsigned int.
O uso mais apropriado seria se o operador fosse '%p'.

*/