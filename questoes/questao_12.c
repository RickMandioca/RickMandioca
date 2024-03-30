/*
Questão 12:

A terceira expressão não é válida, pois não é possível associar um array a uma string diretamente assim, ou associa elemento por elemento ou usa
strcpy.
A quarta expressão não é válida, pois o operador é um '%f', que exibe o número em formato de ponto flutuante, e o argumento passado é o endereço
da primeria posição do array.
A quinta expressão é válida, porém, se aloha[3] não tiver nenhum valor declarado, então coisas[4][4] será lixo de memória.
A sexta expressão não é válida, pois coisas é um array bidimensional, enquanto aloha é unidimensional, então não é possível fazer essa associação.
A sétima expressão não é váldia, pois pf é um ponteiro para float, enquanto value é apenas uma variável float, para que essa associação fosse possível
tinha que ser informado &value.

*/
