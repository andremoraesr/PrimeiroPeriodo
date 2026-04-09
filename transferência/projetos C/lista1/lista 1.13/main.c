#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &num);

    for(int x=1; x<6; x++)   {
        int mult=num*3*x;
        printf("%i, ", mult); }




    return 0;






}
