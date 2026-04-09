#include <stdio.h>

int soma(int n) {
    int soma = 0;
    for(int i=1; i<=n; i++) {
        soma += i;
    }
    return soma;
}

int main ()  {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);

    printf("O somatorio de 1 ate %i eh: %i\n", n, soma(n));

    return 0;
}