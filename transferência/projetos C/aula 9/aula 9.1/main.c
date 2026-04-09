#include <stdio.h>
#include <stdlib.h>

int main()
{
   float v0, t;

   printf("Digite a velocidade inicial de queda e o tempo de queda para calcular o deslocamento vertical: ");
   scanf("%f %f", &v0, &t);

   const double g = 9.81;

   float s = v0*t-g*t*t/2;

   printf("O deslocamento vertical foi de: %.3f m", s);

   return 0;
}
