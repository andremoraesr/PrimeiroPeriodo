#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()    {
setlocale(LC_ALL, "");

    int estado;
    float preco, preco2;

    printf("Digite o preço do produto em questão:");
    scanf("%f", &preco);
    printf("\nDigite o estado para o qual o produto será destinado, sendo 1 para MG, 2 para SP, 3 para RJ e 4 para MS: ");
    scanf("%i", &estado);

    if (estado == 1)  {
        preco2 = preco + (preco*0.07);
        printf("O preço com o imposto aplicado é: %.2f", preco2);
    }   else if(estado == 2)  {
            preco2 = preco + (preco*0.12);
            printf("O preço com o desconto aplicado é: %.2f", preco2);
    }   else if(estado == 3)  {
            preco2 = preco + (preco*0.15);
            printf("O preço com o desconto aplicado é: %.2f", preco2);
    }   else if(estado == 4)   {
            preco2 = preco + (preco*0.08);
            printf("O preço com o desconto aplicado é: %.2f", preco2);
    }

    return 0;

}
