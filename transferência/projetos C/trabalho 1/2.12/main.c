#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    struct Vetor {
        float x, y, z;
    };

    struct Vetor vetor[2];

    for (int i=0; i<2; i++)   {
        printf("Digite a coordenada x do vetor %i no R3: ", i+1);
        scanf("%f", &vetor[i].x);

        printf("Digite a coordenada y do vetor %i no R3: ", i+1);
        scanf("%f", &vetor[i].y);

        printf("Digite a coordenada z do vetor %i no R3: ", i+1);
        scanf("%f", &vetor[i].z);

        printf("\n")
    }
    struct Vr  {
        float x, y, z;
    };

    struct Vr vr;

    vr.x = vetor[0].x + vetor[1].x;
    vr.y = vetor[0].y + vetor[1].y;
    vr.z = vetor[0].z + vetor[1].z;

    printf("As coordenadas do vetor resultante são: (%.2f, %.2f, %.2f)", vr.x, vr.y, vr.z);

    return 0;
}
