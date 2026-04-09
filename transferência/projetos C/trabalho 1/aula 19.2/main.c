#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[50];
    int cv=0, cc=0;

    printf("Digite uma string: ");
    fgets(s, 50, stdin);

    for(int i=0; s[i] != '\0'; i++)   {
       if(s[i]=='a' || s[i]=='A' ||
          s[i]=='e' || s[i]=='E' ||
          s[i]=='i' || s[i]=='I' ||
          s[i]=='o' || s[i]=='O' ||
          s[i]=='u' || s[i]=='U')
            cv++;
        else if(s[i]>=65 && s[i]<=90)  {
            cc++;
        } else if(s[i]>=97 && s[i]<= 122) {
            cc++;
    }  }
    printf("O numero de vogais presentes na string eh: %i\n", cv);
    printf("O numero de consoantes presentes na string eh: %i", cc);


    return 0;
}
