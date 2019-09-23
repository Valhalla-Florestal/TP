#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *arquivo;

    char c;

    arquivo = fopen("teste.txt","r");

    do
    {
        //faz a leitura do caracter no arquivo apontado por pont_arq
        c = getc(arquivo);

        //exibe o caracter lido na tela
        printf("%c" , c);

    }while (c != EOF);

    fclose(arquivo);
    return 0;
}
