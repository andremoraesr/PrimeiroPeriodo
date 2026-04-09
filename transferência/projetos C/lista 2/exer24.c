#include<stdio.h>
#include<locale.h>

int fibo (int n)  {
    if(n==1)  {
        return n;
    }
    else if(n==0)  {
        return n;
    }
    else {
        return fibo(n-1) + fibo(n-2);
    }
}

int main ()  {
    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("Digite um valor inteiro para calcular sua sequência de Fibonacci: ");
    scanf("%i", &n);
    printf("A sequência de Fibonacci de %i é: %i", n, fibo(n));

    return 0;
}