#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;

    scanf("%i", &ano);

    int resto = ano % 4;

    if (resto == 0) {
        printf("SIM");
    }   else {
          printf("NAO");
    }
}
