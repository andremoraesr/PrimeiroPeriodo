#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    struct Dados   {
      char nome[50];
      int idade;
      char ender[60];
    };
    struct Dados pessoa1;

    printf ("Digite o nome da pessoa: ");
    fgets(pessoa1.nome, 50, stdin);
    printf("Digite a idade da pessoa em questão: ");
    scanf("%i", &pessoa1.idade);
    printf("Digite o endereço da pessoa: ");
    setbuf(stdin, NULL);
    fgets(pessoa1.ender, 60, stdin);

    return 0;
}
