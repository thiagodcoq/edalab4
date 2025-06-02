/* 1) Implemente as seguintes funções de um TAD de Conjuntos (Set) cuja interface é dada:
typedef unsigned int Set;
a) set_remove
remove o i-ésimo elemento do conjunto s 
Set set_remove(Set s, int i);
b) set_diferenca
entrada: conjuntos r e s
saída: o conjunto t formado pelos elementos de r
que não estão em s 
Set set_diferenca(Set r, Set s);
A sua implementação deverá ser a mais simples possível.
Dicas:
1) O operador k<< i, desloca os bits de k de i posições para a esquerda.
2) O operador ~b inverte os bits de b. */