#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[100];

    for(int i=0; i<100; i++)    {
        vet[i]=i+1;
        if (vet[i]%2==0)   {
            vet[i]=0;
        }   else {
                vet[i]=1;
        }
        printf("%i", vet[i]);
    }
    return 0;

}
