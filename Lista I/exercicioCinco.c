#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* roda_string(char* str);
int main(){
    char palavra[] = "casa";
    char *novaPalavra = roda_string(palavra);
    printf("%s\n", novaPalavra);
    return 0;
}
char* roda_string(char* str){

    int tamString = strlen(str);
    char *nova = malloc(tamString * sizeof(int));
    char ultimoCaracter = str[tamString - 1];
    for(int i = tamString -1; i > 0; i--){
        nova[i] = str[i - 1];
    }
    nova[0] = ultimoCaracter;
    return nova;
}