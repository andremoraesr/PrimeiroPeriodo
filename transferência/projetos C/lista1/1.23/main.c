#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double salario, prestacao;

    printf("Digite o salario do trabalhador em questao: ");
    scanf("%lf", &salario);

    printf("Digite agora o valor da prestacao do emprestimo: ");
    scanf("%lf", &prestacao);

    if (prestacao > ((0.3) * salario))  {
         printf("Emprestimo nao concedido");
    } else   {
         printf("Emprestimo concedido");
    }
    return 0;
}
