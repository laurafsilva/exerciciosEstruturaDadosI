/*Faça um programa que recebe como entrada três graus:
G1, G2 e G3 e calcula a média, se o aluno estiver
aprovado, ou informa a necessidade de uma prova final,
se o aluno não tiver satisfeito o seguinte critério:
– Todas as notas maiores ou iguais a 3 E
– Média aritmética maior ou igual a 5
• Coloque o cálculo da média em uma função separada*/

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
