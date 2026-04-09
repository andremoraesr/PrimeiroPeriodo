#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Digite a dimensao do quadrado:");
   scanf("%i", &n);

   for (int i=0; i < n; i++)  {
        for (int j=0; j < n; j++)  {
            printf(" A");
        }
        printf("\n");}

    return 0;


}
