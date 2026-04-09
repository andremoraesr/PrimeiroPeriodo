#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    struct Carro  {
        char marca[16];
        int ano;
        float preco;
    } ;

    struct Carro carro[5];

    for(int i=0; i<5; i++)  {
        printf("Digite a marca do carro %i: ", i+1);
        scanf("%49[^\n]", carro[i].marca);

        printf("Digite o ano do carro %i: ", i+1);
        scanf("%i", &carro[i].ano);

        printf("Digite o valor do carro %i: ", i+1);
        scanf("%f", &carro[i].preco);
    }
    float p;

    printf("Digite um valor para que os carros com valor inferior sejam mostrados: ");
    scanf("%f", &p);

    while (p!=0) {
        for(int i=0; i<5; i++)  {
            if (carro[i].preco < p)    {
                printf("Marca: %s.\n", carro[i].marca);
                printf("Ano: %i.\n", carro[i].ano);
                printf("Preço: %.2f reais.\n", carro[i].preco);
        }  }
         printf("Digite outro valor para que os carros com valor inferior sejam mostrados: ");
        scanf("%f", &p);
    }
    return 0;

}
