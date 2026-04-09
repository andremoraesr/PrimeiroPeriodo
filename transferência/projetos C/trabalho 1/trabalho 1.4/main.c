#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, h, pi=3.141592;

    scanf("%f %f", &h, &r);

    float v=pi*h*r*r;

    printf("%f", v);
}
