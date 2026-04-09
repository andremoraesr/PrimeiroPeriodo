#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C;

    printf("Digite a temperatura em graus Celsius para converte-la em graus Fahrenheit: ");
    scanf("%f", &C);

    float F = 1.8*C+32;

    printf("A temperatura convertida para graus Fahrenheit eh: %1.f", F);

    return 0;

}
