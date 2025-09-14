#include<stdio.h>
#include<stdlib.h>
int testa_PA(int n, int*v);
int main(){
    int tamanhoVetor=0;

    printf("Digite o tamanho do seu vetor:\n");
    scanf("%d", &tamanhoVetor);
    if (tamanhoVetor<3){
        return 0;
    }
    

    int *vetorAritmetico = malloc(tamanhoVetor * sizeof(int));;

    printf("Digite os numeros do seu vetor:\n");
    for(int i = 0; i<tamanhoVetor; i++){
        scanf("%d", &vetorAritmetico[i]);
    }

    int progressaoAritmetica = 0;

    progressaoAritmetica = testa_PA(tamanhoVetor, vetorAritmetico);
    
    printf("O valor da progressÃ£o aritmÃ©tica Ã©: %d", progressaoAritmetica);
    return 0;
}
int testa_PA(int n, int*v){
    int *k = malloc(n * sizeof(int));
    int progArit = 1;

    for(int i=1; i<n; i++){
        k[i] = (v[i] - v[0])/i;
    }

    if(k[2] != k[1]){
        progArit = 0;
    }

    if(progArit == 1){
        progArit = k[1];
    }

    return progArit;
}