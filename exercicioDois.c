#include<stdio.h>
int calcularMedia(int notaUm, int notaDois, int notaTres);
int main(){
    int G1, G2, G3;
    scanf("%d", &G1);
    scanf("%d", &G2);
    scanf("%d", &G3);
    if((G1<=3 || G2<=3 || G3<=3)|| calcularMedia(G1, G2, G3)<5){
        printf("REPROVADO");
    }
    else{
        printf("APROVADO");
    }
    return 0;
}
int calcularMedia(int notaUm, int notaDois, int notaTres){
    int media = 0;
    media = (notaUm + notaDois + notaTres)/3;
    return media;
}
