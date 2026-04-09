#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vet[5], troca;

    for(int i=0; i<5; i++)    {
        printf("Digite um numero do vetor: ");
        scanf("%f", &vet[i]);
    }
    for(int i=0; i<4; i++)  {
       for(int j=i+1; j<5; j++)   {
            if(vet[i]>vet[j])     {
                troca=vet[j];
                vet[j]=vet[i];
                vet[i]=troca;
    }   }   }
    for(int i=0; i<5; i++)    {
        printf("%.2f ", vet[i]);
    }



    return 0;
}
