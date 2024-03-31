/*
Questão 22:

a = 1010, b = 0001
x = 1010, y = 0001, z = 1011
Na primeira execução do while:
x = x | b = 1011
y = y ^ a = 1011
z = z & (a + b) = 1011
a = 0101
b = 0010

Na segunda execução do while:
x = x | b = 1011
y = y ^ a = 1110
z = z & (a + b) = 1011
a = 0010
b = 0100

Na terceira execução do while:
x = x | b = 1111
y = y ^ a = 1100
z = z & (a + b) = 0010
a = 0001
b = 1000

Na quarta execução do while:
x = x | b = 1111
y = y ^ a = 1101
z = z & (a + b) = 0000
a = 0000
b = 0000

Logo, a saída do programa será: 15, 13, 0

*/