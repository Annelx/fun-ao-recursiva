#include <stdio.h>

double potencia(int base, int exponente) {
    if (exponente == 0)
        return 1;
    else
        return (double)base * potencia(base, exponente - 1);
}

int main() {
    int base, exponente;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o exponente: ");
    scanf("%d", &exponente);


    printf("%d elevado à %d é igual a: %.2f\n", base, exponente, 
    potencia(base, exponente));

    return 0;
}