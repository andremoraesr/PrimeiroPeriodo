#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s, m, h;

    printf("Digite o tempo em questao em segundos: ");
    scanf("%f", &s);

    m = s/60;
    h= m/60;

    printf("Este tempo corresponde a %f segundos, %f minutos e %f horas", s, m, h);

    return 0;
}
