#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3];

    for(int i=0; i<3; i++)   {
        for(int j=0; j<3; j++)   {
            scanf("%i", &mat[i][j]);
    }   }
    int det, soma, sub;

    soma=(mat[0][0]*mat[1][1]*mat[2][2]) + (mat[0][1]*mat[1][2]*mat[2][0]) + (mat[0][2]*mat[1][0]*mat[2][1]);
    sub=(mat[0][2]*mat[1][1]*mat[2][0]) + (mat[0][1]*mat[1][0]*mat[2][2]) + (mat[0][0]*mat[1][2]*mat[2][1]);
    det=soma-sub;

    printf("%i", det);
}
