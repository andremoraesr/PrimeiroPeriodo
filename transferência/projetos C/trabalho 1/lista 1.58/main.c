#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[10][3], medias[10], somas[10];

    for(int i=0; i<10; i++)   {
        for(int j=0; j<3; j++)   {
            printf("Digite a nota do aluno %i da prova %i: ", i+1, j+1);
            scanf("%f", &notas[i][j]);
    }
        somas[i]=0;
        somas[i]=notas[i][0]+notas[i][1]+notas[i][2];
    }
    for(int i=0; i<10; i++)   {
        medias[i]=somas[i]/3.0;
        printf("%.2f ", medias[i]);
    }
    return 0;
}
