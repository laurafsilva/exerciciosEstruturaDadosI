#include<stdio.h>
#include<math.h>
double avalia(double*poli, int grau, double x){
    double resultadoFinal = 0;
    for(int i = 0; i<= grau; i++){
        resultadoFinal += (pow(x, i) * poli[i]);
    }


    return resultadoFinal;
}
int main(){
    double poliParametro[] = {12, 2, 3};
    int grauPolinomio = 2;
    double valorAvaliar = 0;

    printf("Digite o valor que vocÃª quer avaliar:\n");
    scanf("%lf", &valorAvaliar);

    double valorAvaliado = avalia(poliParametro, grauPolinomio, valorAvaliar);
    printf("%lf", valorAvaliado);

    return 0;
}