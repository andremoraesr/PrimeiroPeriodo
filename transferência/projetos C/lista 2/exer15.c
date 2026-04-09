#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct Eletro {
        char nome[16];
        float potencia;
        int horas;
    } ;
    struct Eletro eletro[5];

    for(int i=0; i<5; i++)    {
        printf("Qual o eletrodoméstico? ");
        scanf("%15[^\n]s", eletro[i].nome);
        setbuf(stdin, NULL);

        printf("Qual a potência deste eletroméstico em kW? ");
        scanf("%f", &eletro[i].potencia);
        setbuf(stdin, NULL);

        printf("Quanto tempo ele é utilizado por dia em horas? ");
        scanf("%i", &eletro[i].horas);
        setbuf(stdin, NULL);

        printf("O eletrodoméstico %s foi cadastrado! \n\n", eletro[i].nome);
    }
        int dias;
        printf("Digite quantos dias de uso para que o consumo seja calculado: ");
        scanf("%i", &dias);

        float cp[5], ct=0, cr[5];

        for (int i=0; i<5; i++)    {
            cp[i]= eletro[i].potencia * eletro[i].horas * dias;
            ct += cp[i];
        }
        for (int i=0; i<5; i++)  {
            cr[i]= (cp[i]/ct)*100.0;
        }
        printf("O consumo total da residência é de %fkWh.\n", ct);

        for (int i=0; i<5; i++)    {
            printf("O consumo relativo do eletrodoméstico %s é de: %f%%.\n", eletro[i].nome, cr[i]);
        }

    return 0;
}
