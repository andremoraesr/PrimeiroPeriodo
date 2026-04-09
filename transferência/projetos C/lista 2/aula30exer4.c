#include <stdio.h>
#include <stdlib.h>

int main ()     {
//continuar o resto tudo!!!!
    struct CONTATO    {
        char *nome;
        char endereco[60];
        int telefone;
        char email[30];
    };
    typedef struct CONTATO contato;

    int a;
    printf("Digite quantos contatos você quer guardar: ");
    scanf("%i", &a);

    for(int i=0; i<a; i++)   {

    }
}