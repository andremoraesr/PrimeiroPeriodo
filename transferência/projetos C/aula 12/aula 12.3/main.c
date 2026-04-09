#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Insira o tipo de veiculo estacionado: c para carro, o para onibus e t para caminhao: ");
    char tipoveiculo = getchar();
    float valor;
    int horas;
    printf("Digite o tempo em horas estacionado: ");
    scanf("%i", &horas);

    switch (tipoveiculo)   {
      case 'c':
          valor = 2*horas;
          printf("O valor a ser pago eh: %f", valor);
          break;
      case 'o':
          valor = 3*horas;
          printf("O valor a ser pago eh: %f", valor);
          break;
      case 't':
          valor = 4*horas;
          printf("O valor a ser pago eh: %f", valor);
          break;
      default:
        printf("Conceito invalido");
    }
     return 0;
}
