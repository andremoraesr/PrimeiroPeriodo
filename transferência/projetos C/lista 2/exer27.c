#include <stdio.h>

int main ()  {

    int x, y;

    printf("Digite dois valores: ");
    scanf("%i %i", &x, &y);

    if (&x > &y)    {
        printf("%i %i", x, y);
    }
    else {
        printf("%i %i", y, x);
    }
    return 0;
}