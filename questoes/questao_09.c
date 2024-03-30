/*
Questão 9:

Do jeito que o programa está escrito, ele tem alguns erros e apresentará problemas de compilação.
O primeiro é que em C, não se pode declarar o valor dos atributos dentro do struct, isso deve ser feito no código main.
Segundo é que não foi informado o tamanho que deve ser ocupado pelo ponteiro *s, então deve ser feito uma alocação dinâmica de memória usando
malloc, e depois liberada usando free.
Terceiro é que há um erro no argumento do segundo printf, está chamando o atributo 'name' do struct, porém 'name' não existe, e sim 'nome'.

*/