#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()   {

    setlocale(LC_ALL, "Portuguese");

    FILE *fp;
    fp = fopen("arq.txt", "w");
    if(fp == NULL) {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    
    char c;

    while((c = fgetc(stdin)) != '\n')  {
        fputc(c, fp);
    }

    fclose(fp);

    return 0;

}