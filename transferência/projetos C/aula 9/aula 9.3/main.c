#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"");

    float n1, n2, n3;
    float p1, p2, p3;

    printf("Insira três notas e seus respectivos pesos para obter a média delas: ");
    scanf("%f %f %f %f %f %f", &n1, &p1, &n2, &p2, &n3, &p3);

    float media = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);

    printf("A média ponderada das notas inseridas é: %.2f pontos", media);

    return 0;


}
