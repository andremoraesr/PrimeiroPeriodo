#include<stdio.h>
#include<locale.h>

int Dv(int *cpf, int n) {
    int dv1, soma1=0;
     int j=10;

    for(int i=0; i<n; i++)  {
        soma1=soma1+ cpf[i]*j;
        j--;
    }
    int resto=(soma1*10)%11;

    if(resto==10)  {
        dv1=0;
    }
    else{
        dv1=resto;
    }
    return dv1;
}

int Dv2(int *cpf, int n)  {
    int dv2, soma2=0;
    int j=11;

    for(int i=0; i<n; i++)  {
        soma2=soma2 + cpf[i]*j; 
        j--;
    }
    soma2= (soma2 + 2*Dv(cpf, 9))*10;
    int resto = soma2 % 11;

    if(resto==10)  {
        dv2=0;
    }
    else {
        dv2=resto;
    }
    return dv2;
}

int main ()  {
    setlocale(LC_ALL, "Portuguese");
    
    int cpf[9];
    
    printf("Digite os 9 primeiros digitos de um CPF: ");
    for(int i=0; i<9; i++)  {
        scanf("%i", &cpf[i]);
    }
    printf("Os dois últimos digitos do CPF são %i e %i: \n.", Dv(cpf, 9), Dv2(cpf, 9));
    printf("O CPF completo é: ");
    for(int i=0; i<9; i++)  {
        printf("%i", cpf[i]);
    }
    printf("-%i%i", Dv(cpf, 9), Dv2(cpf, 9) );

    return 0;
}