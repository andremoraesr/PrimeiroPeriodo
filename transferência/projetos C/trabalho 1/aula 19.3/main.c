#include <stdio.h>
#include <stdlib.h>

int main()
{
    char andre[50];

    printf("Digite uma string: ");
    fgets(andre, 50, stdin);

    for(int i=0; andre[i] != '\0'; i++)  {
        if(andre[i]>=65 && andre[i]<=90)  {
            andre[i]= andre[i]+32;
        }
    }
    printf("A string digitada eh: %s", andre);

    return 0;
}
