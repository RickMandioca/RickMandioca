/*
Questão 10:

Do jeito que o programa foi escrito, ele apresenta alguns erros e apresentará problemas na compilação.
O primeiro é que a função main não pode ser do tipo void e sim do tipo int, pois alguns compiladores não permitem essa execução.
O segundo é que não é possível atribuir o valor a um ponteiro sem que ele esteja apontando para alguem, é necessário fazer com que o ponteiro
aponte para alguma outra variável previamente.
O terceiro é que não é possível fazer o incremento ++, em uma variável ou ponteiro do tipo const, pois declarar como const significa que o
valor não pode ser alterado depois de declarado.

*/