#include <stdio.h>
#include <string.h>
#include <locale.h>

void palavraInvertida(char palavra[30], int tamanho, int i);

int main(){
    setlocale(LC_ALL, "Portuguese");

    char palavra[30];
    
    printf("\nInforme a palavra que será invertida: ");
    gets(palavra);
    
    int tamanho = strlen(palavra);
    int index = 1;
    
    printf("\nA palavra '%s' invertida fica: ", palavra);
    palavraInvertida(palavra, tamanho, index);
    printf("\n");
    
    return 0;
}

void palavraInvertida(char palavra[30], int tamanho, int i){
    if (i > tamanho){
        return;
    } 
    printf("%c", palavra[tamanho-i]);
    palavraInvertida(palavra, tamanho, ++i);
}
