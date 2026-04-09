#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    scanf("%i", &num);

    for(int i=1; i<=num; i++)   {
        if(num%i==0)
            printf("%i ", i);
    }
}
