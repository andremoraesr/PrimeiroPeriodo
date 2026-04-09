#include <stdio.h>

void esfera(float raio, float *area, float *volume)   {

    *area= 4 * 3.1415 * raio * raio;
    *volume= (4.0/3) * 3.1415 * raio * raio * raio;

}

int main ()   {
    
    float r, a, v;

    printf("Digite o raio: ");
    scanf("%f", &r);

    esfera(r, &a, &v);
    
    printf("O raio eh: %f\n", r);
    printf("A area eh: %f\n", a);
    printf("O volume eh: %f\n", v);

    return 0;
}