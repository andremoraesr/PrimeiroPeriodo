#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float a, b, c, d;

    printf("Digite quatro notas: ");
    scanf ("%f %f %f %f", &a, &b, &c, &d);

    float x = (a + b + c + d)/4;

    printf("A media aritmetica destas quatro notas e: %f", x);

    return 0;
}
