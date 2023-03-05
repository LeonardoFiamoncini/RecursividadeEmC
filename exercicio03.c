#include <stdio.h>
#include <locale.h>

float potenciacao(int b, int e);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int base, expoente;
    
    printf("\nInforme a base da potência: ");
    scanf("%d", &base);
    
    printf("\nInforme o expoente da potência: ");
    scanf("%d", &expoente);

    printf("\n%d^%d = %.2f\n", base, expoente, potenciacao(base, expoente));

    return 0;
}

float potenciacao(int b, int e){
    if (b == 0){
        if (e == 0) return 1;
        return 0;
    } 
    else if (e == 0){return b * 1/b;} 
    else if (e == 1){return b;} 
    else if (e < 0){return 1 / potenciacao(b, e*(-1));}
    else {return b * potenciacao(b, --e);}
}