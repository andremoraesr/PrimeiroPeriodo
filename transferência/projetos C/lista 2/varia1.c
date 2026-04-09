#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main ()   {

    setlocale(LC_ALL, "Portuguese");

    FILE *fp;
    fp = fopen("arq2.txt", "w");
    if(fp == NULL) {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    
    char s[100];
    fgets(s, 100, stdin);

    while(strcmp (s, "pare") != 0)  {
        fputs(s, fp);
        fgets(s, 100, stdin);
    }

    fclose(fp);

    return 0;

}