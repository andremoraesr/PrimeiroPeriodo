#include <stdio.h>

int negativos(int *vet, int n)   {

    int i, count=0;

    for(i=0; i<n; i++)   {
        if(*(vet+i) <0)
            count++;
    }
    return count;
}

int main ()   {
    
    int j;
    printf("Digite quantos elementos serão digitados: ");
    scanf("%i", &j);

    int v[j];

    printf("Digite os elementos do vetor: ");

    for (int i=0; i<j; i++)  {
        scanf("%i", &v[i]);
    }
    
    printf("%i", negativos(v, j));

    return 0;
}