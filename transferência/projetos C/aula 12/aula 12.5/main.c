#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float peso, altura;

    printf("Digite sua altura em m e seu peso em kg: ");
    scanf("%f %f", &altura, &peso);

    if (altura < 1.20)  {
        if (peso <= 60) {
                  printf("Sua classificação é A.");
        }    else if (peso <= 90)  {
                  printf("Sua classificação é B.");
        }    else if (peso > 90)  {
                  printf("Sua classificação é C.");  }
}   else if (altura <= 1.7)  {
        if (peso <= 60) {
                  printf("Sua classificação é D.");
        }    else if (peso <= 90)  {
                  printf("Sua classificação é E.");
        }    else  {
                  printf("Sua classificação é F.");  }
}   else  {
        if (peso <= 60)  {
                  printf("Sua classificação é G.");
        }     else if (peso <= 90)  {
                  printf("Sua classificação é H.");
        }     else  {
                  printf("Sua classificação é I.");
        } }
    return 0;





}
