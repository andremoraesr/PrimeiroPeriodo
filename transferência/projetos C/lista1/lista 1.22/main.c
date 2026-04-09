#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    printf("Digite um ano qualquer: ");
    scanf("%i", &ano);

    int resto = ano % 4;

    if (resto == 0) {
        printf("O ano %i eh bissexto!", ano);
    }   else {
          printf("O ano %i nao eh bissexto", ano);
    }

    return 0;

}
