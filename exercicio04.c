#include <stdio.h>
#include <locale.h>

int mdc(int n1, int n2);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2;

    printf("\nInforme o 1º número: ");
    scanf("%d", &numero1);

    printf("\nInforme o 2º número: ");
    scanf("%d", &numero2);

    printf("\nMDC (%d, %d) = %d\n", numero1, numero2, mdc(numero1, numero2));

    return 0;
}

int mdc(int n1, int n2){
    int resto = n1%n2;
    if (resto == 0) return n2;
    mdc(n2, resto);
}