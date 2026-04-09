#include <stdio.h>
#include <stdlib.h>

int main()
{
   float lado1, lado2, lado3;

   printf("Digite tres lados de um triangulo : ");
   scanf("%f %f %f", &lado1, &lado2, &lado3);

   if (lado1 >= lado2 + lado3 && lado2 >= lado1 + lado3 && lado3 >= lado1 + lado3)  {
        printf("Estes lados nao formam um triangulo!");
   } else if (lado1==lado3 && lado2==lado3)   {
        printf("Estes lados formam um triangulo equilatero");
   } else if (lado1==lado2 || lado1==lado3 || lado2==lado3)  {
        printf("Estes lados formam um triangulo isosceles");
   } else if (lado1!=lado2 && lado1!=lado3 && lado2!=lado3)  {
        printf("Estes lados formam um triangulo escaleno");
   }
   return 0;
}
