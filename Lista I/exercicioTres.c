#include<stdio.h>
#include<string.h>
int ultima_ocorrencia(char*s, char c);
int main(){
    char palavras[] = "rio de janeiro";
    char letra = 'i';
    int posicaoLetra = ultima_ocorrencia(palavras, letra);
    printf("%d\n", posicaoLetra);
    return 0;
}
int ultima_ocorrencia(char*s, char c){
    int posicaoUltimaLetra = -1;
    int tam = strlen(s);
    for(int i = 0; i < tam; i++){
        if(s[i] == c){
            posicaoUltimaLetra = i;
        }
    }
    return posicaoUltimaLetra;
}