#include <stdio.h>

void circulo(float raio, float *area, float *perimetro, float *diametro)   {
    *area= 3.14 * raio * raio;
    *perimetro= 2 * 3.14 * raio;
    *diametro = 2 * raio;
}  

void main ()  {
    
    float r, a, p, d;
    printf("Digite o raio de um circulo: ");
    scanf("%f", &r);

    circulo(r, &a, &p, &d);

    printf("area: %.2f\n", a);
    printf("Perimetro: %.2f\n", p);
    printf("Diametro: %.2f\n", d);
}

