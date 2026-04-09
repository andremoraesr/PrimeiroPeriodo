#include <stdio.h>
#include <stdlib.h>

int main()
{
    float G;

    printf("Digite o angulo em questao em graus: ");
    scanf("%f", &G);

    float R = (G*3.14)/180;

    printf("O angulo corresponde a %.2f radianos.", R);

    return 0;
}
