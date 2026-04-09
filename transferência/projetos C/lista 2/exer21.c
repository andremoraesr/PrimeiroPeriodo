#include <stdio.h>

void troca(int *a, int *b)  {
    int troca = *a;
    *a = *b;
    *b = troca;
}

int main ()  {
    
    int x, y;

    printf("Digite dois valores inteiros: ");
    scanf("%i %i", &x, &y);

    troca(&x, &y);

    printf("Os valores foram trocados: %i e %i.", x, y);

    return 0;
}