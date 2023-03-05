#include <stdio.h>
#include <locale.h>

int multiplicacao(int n1, int n2);

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int numero1, numero2;

    printf("\nInforme o 1º número da multiplicação: ");
    scanf("%d", &numero1);

    printf("\nInforme o 2º número da multiplicação: ");    
    scanf("%d", &numero2);

    printf("\n%d x %d = %d\n", numero1, numero2, multiplicacao(numero1, numero2));

    return 0;
}

int multiplicacao(int n1, int n2){
    if (n1 == 0 || n2 == 0){
        return 0;
    } else if (n2 < 0){
        if (n1 < 0) return multiplicacao(n1*(-1), n2*(-1));

        return multiplicacao(n2, n1);
    } 
    return n1 + multiplicacao(n1, --n2); 
}