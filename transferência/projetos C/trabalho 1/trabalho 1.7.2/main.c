#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3], mat2[3][2];

    for(int i=0; i<3; i++)   {
        for(int j=0; j<3; j++)   {
            scanf("%i", &mat[i][j]);
    }   }
    int det, soma, sub;

    for(int i=0; i<3; i++)   {
        for(int j=0; j<2; j++)    {
            mat2[i][j]=mat[i][j];
    }   }
    soma = (mat[0][0]*mat[1][1]*mat[2][2]) + (mat[0][1]*mat[1][2]*mat2[2][0]) + (mat[0][2]*mat2[1][0]*mat2[2][1]);
    sub = (mat2[0][1]*mat2[1][0]*mat[2][2]) + (mat2[0][0]*mat[1][2]*mat[2][1]) + (mat[0][2]*mat[1][1]*mat[2][0]);
    det = soma-sub;

    printf("%i", det);
}
