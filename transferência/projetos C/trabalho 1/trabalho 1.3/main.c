#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p1, p2, p3;

    scanf("%f %f %f", &p1, &p2, &p3);

    float media=(p1*2 + p2*3 + p3*3)/8;

    printf("%.2f", media);
}
