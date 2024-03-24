/*
Questão 1:
a)
"p == &i" é uma expressão lógica que irá retornar 1, pois foi feita anteriormente a associação p = &i

b) 
Essa expressão irá retornar "-2", pois *p se refere ao conteúdo de i=3, e *q ao conteudo de *q=5, logo 3 - 5 = -2

c)
O resultado dessa expressão é 3, pois &p retorna o endereço do ponteiro p, *&p se refere ao endereço de quem o ponteiro p está
apontando ou seja, endereço de i, então **&p se refere ao conteúdo de i=3

d)
O resultado é 10, pois 3 - 2/5 é 3, uma vez que 2/5 dá um resultado inteiro 0, então 3 + 7 = 10
*/
