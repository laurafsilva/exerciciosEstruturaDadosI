/*Questão 1:
Suponha que:
a = 3
b = a / 2
c = b + 3.1
Qual é o valor de c?
q c = 4.6
q c = 4.1
q c = 4
q Nenhuma das opções acima
q Não é possível determinar o valor de c*/
#include<stdio.h>
int main(){
    int a=3, b=0;
    float c=0;
    b = a/2;
    c = b + 3.1;
    printf("%f", c);
    return 0;
}
