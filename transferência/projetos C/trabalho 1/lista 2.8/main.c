#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    struct funcio {
        char nome[50], sexo, nasc[11], cargo[30];
        int idade, cpf, setor;
        float salario;
    };
    struct funcio eu;

    printf("Digite seu nome: ");
    scanf("%49[^\n]", eu.nome);

    printf("\nDigite sua idade: ");
    scanf("%i", &eu.idade);
    setbuf(stdin, NULL);

    printf("\nDigite seu sexo (M/F): ");
    eu.sexo = getchar();
    setbuf(stdin, NULL);

    printf("\nDigite seu CPF (apenas números): ");
    scanf("%i", &eu.cpf);
    setbuf(stdin, NULL);

    printf("\nDigite sua data de nascimento (dd/mm/ano): ");
    scanf("%11[^\n]", eu.nasc);

    printf("\nDigite o código do seu setor (0-99): ");
    scanf("%i", &eu.setor);
    setbuf(stdin, NULL);

    printf("\nDigite seu cargo: ");
    scanf("%30[^\n]", eu.cargo);

    printf("\nDigite seu salário: ");
    scanf("%f", &eu.salario);

    printf("O usuário foi cadastrado!\n");
    printf("Nome: %s.\n", eu.nome);
    printf("Idade: %i.\n", eu.idade);
    printf("Sexo: %c.\n", eu.sexo);
    printf("CPF: %i.\n", eu.cpf);
    printf("Data de nascimento: %s.\n", eu.nasc);
    printf("Código de setor: %i.\n", eu.setor);
    printf("Cargo: %s.\n", eu.cargo);
    printf("Salário: %2.f reais.\n", eu.salario);

    return 0;
}
