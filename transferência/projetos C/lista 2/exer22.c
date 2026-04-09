#include<stdio.h>
#include<locale.h>

int soma(int n)   {
    if(n==1){
        return 1;
    }
    else if(n==0) {
        return 0;
    }
    else   {
        return n + soma(n-1);
    }
}

int main ()   {

    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("Digite um número para calcular a soma de 1 até ele: ");
    scanf("%i", &n);
    printf("A soma de 1 até %i é: %i", n, soma(n));

    return 0;
}