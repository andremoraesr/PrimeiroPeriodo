#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite um numero positivo: ");
    scanf("%i", &num);

    for(int i=1; i<=num; i++)   {
        if (num%i==0)
            printf("%i ", i);
    }

    return 0;





}
