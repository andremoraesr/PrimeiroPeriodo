#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[50];
    int comp=0;

    printf("Digite uma string: ");
    fgets(s, 50, stdin);

    while(s[comp]!= '\0')
        comp++;

    printf("O comprimento da string eh: %i", comp);

    return 0;
}
