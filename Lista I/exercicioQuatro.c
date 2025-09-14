#include<stdio.h>
#include<string.h>
void roda_string(char* str);
int main(){
    char palavra[] = "casa";
    roda_string(palavra);
    return 0;
}
void roda_string(char* str){
    int tamString = strlen(str);
    char ultimoCaracter = str[tamString - 1];
    for(int i = tamString -1; i > 0; i--){
        str[i] = str[i - 1];
    }
    str[0] = ultimoCaracter;
    printf("%s", str);
}