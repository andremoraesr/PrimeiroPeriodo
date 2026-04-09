#include <stdio.h>

int soma(int *m, int n)  {
    int soma = 0;
    for(int i=0; i<n; i++) {
        soma += m[i]; 
    }
    return soma;
}

void imp(int *m, int n)  {
    for (int i=0; i<n; i++)   {
        printf("%i ", m[i]);
    }
}   

int main ()  {
    int vet[5];
    printf("Digite 5 elementos de um vetor: ");
    for(int i=0; i<5; i++)   {
        scanf("%i", &vet[i]);
    }
    printf("O vetor digitado foi: ");
    imp(vet, 5);
    printf("\n");
    printf("A soma dos elementos desse vetor eh: %i", soma(vet, 5));

    return 0;
}