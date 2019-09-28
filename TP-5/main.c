#include "TMatriz.h"
#include "TadCliente.h"

int main()
{
    TMatriz pmatriz;
    TTipoDados pDadosDeCompra;

    FILE *arquivo;

    int result;

    arquivo = fopen("teste.txt","r");

    int cliente, produto, qtdeProduto, totalProdutos;
    int numLinha, numColuna;
    char dataCompra[10];
    int contador = 2;
    int linha = 2;

    fscanf(arquivo,"%d %d ",&numLinha,&numColuna);
    CriaMatrizEsparsa(&pmatriz,numLinha,numColuna);
    //char c;

    //result = fscanf(arquivo,"%s ",&c);
    //printf("%d\n",result);

    fscanf(arquivo,"%d %d %s %d\n",&cliente,&produto,dataCompra,&qtdeProduto);
    totalProdutos = quantidadeCompra(&pDadosDeCompra, qtdeProduto);

    do
    {
        //fflush(stdin);
        fscanf(arquivo,"%s %d\n",dataCompra,&qtdeProduto);

        totalProdutos += quantidadeCompra(&pDadosDeCompra, qtdeProduto);
        //pDadosDeCompra.quantidadeComprada = qtdeProduto;       
    }while(!feof(arquivo));
    
    /*while(result != EOF){
        if(linha == contador){
            printf("%d %d \n",contador,linha);
            fscanf(arquivo,"%d %d\n",&cliente,&produto);
            printf("Linha: %d Coluna: %d \n",cliente,produto);
        }
        contador++;
        linha++;
        result = fscanf(arquivo,"%s ",&c);
    }*/
    printf("%d\n",totalProdutos);
    fclose(arquivo);
    return 0;
}

/*
//gcc -o teste main.c tad.h tad.c
int main()
{
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
    return 0;
}
*/
