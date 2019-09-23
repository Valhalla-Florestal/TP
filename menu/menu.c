#include <stdio.h>
#include <stdlib.h>
//imprimeMatriz, leMatriz,quantidadeComprasPorProduto, quantidadeComprasPorCliente

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
    printf("\n");

    int opcao = 0;

    printf("***********************************************************\n");
    printf("*  Universidade Federal de Vicosa - Campus Florestal      *\n");
    printf("*  Primeiro Trabalho Pratico da Disciplina CCF251 2019/2  *\n");
    printf("*  Alunos: Claudio Barbosa Silva -  3492                  *\n");
    printf("*          Guilherme Correa Souza - 3509                  *\n");
    printf("*          Roniel Nunes Barbosa -   3464                  *\n");
    printf("***********************************************************\n");

    do{
        printf("***********************************************************\n");
        printf("*  Programa que realiza as seguintes operacoes:           *\n");
        printf("*  1 - Imprimir Matriz                                    *\n");
        printf("*  2 - Le Matriz                                          *\n");
        printf("*  3 - Quantidade de compras por cliente                  *\n");
        printf("*  4 - Quantidade de compras por produto                  *\n");
        printf("*  0 - Sair                                               *\n");
        printf("***********************************************************\n");

        printf("Entre com uma opcao: ");
        scanf("%d",&opcao);

        switch(opcao)
        {
            case 1:
                printf("Matriz\n");
            break;

            case 2:
                printf("Leitura\n");
            break;

            case 3:
                printf("quantidadeComprasPorCliente\n");
            break;

            case 4:
                printf("quantidadeComprasPorProduto\n");
            break;

            case 0:
                break;
        }
    }while(opcao != 0);

    fclose(arquivo);

    printf("OK");
    return 0;
}
