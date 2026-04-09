#include <stdio.h>

void tri(float x, float y, float z)  {
    if(x < y + z && y < x + z && z < x + y)  {
        if(x == y && y==z)
            printf("eh equilatero");
        else if(x == y || y == z || x == z)
            printf("eh isosceles");
        else
            printf("eh escaleno");
    }
    else
        printf("nao forma triangulo");
}

int main ()  {
    int x, y, z;
    printf("Digite tres lados de um triangulo: ");
    scanf("%i %i %i", &x, &y, &z);

    tri(x, y, z);

    return 0;
}