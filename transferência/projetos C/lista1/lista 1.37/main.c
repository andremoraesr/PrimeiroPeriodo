#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float alan=1500, bob=1000;   //metade do salario
    float cap_alan=0, cap_bob=0;
    int meses=1;

    while (cap_alan>=cap_bob)   {
        cap_alan = (cap_alan + alan)*0.0039*meses;
        cap_bob = (cap_bob+bob)*0.05*meses;

        meses++;
    }
    printf("O numero de meses necessario foi de %i meses", meses);

    return 0;
}
