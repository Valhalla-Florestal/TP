#include <stdio.h>
#include <stdlib.h>
#include "TadMochilao.h"
#include <time.h>

int main(){

    float tempo;
    time_t t_ini, t_fim;

    t_ini = time(NULL);
    Tcelula *PesosEValores;
    FILE* ptr_arq;
    int NumTuplas, i=0, z=1;

    printf("***********************************************************\n");
    printf("*  Universidade Federal de Vicosa - Campus Florestal      *\n");
    printf("*  Segundo Trabalho Pratico da Disciplina CCF251 2019/2   *\n");
    printf("*  Alunos: Claudio Barbosa Silva -  3492                  *\n");
    printf("*          Guilherme Correa Souza - 3509                  *\n");
    printf("***********************************************************\n");

    ptr_arq = fopen("dadosTP2-40.txt","r");

    if((ptr_arq = fopen("dadosTP2-40.txt","r"))==NULL){
        printf("Erro na abertura do arquivo.\n\n");
    }
    else{
        printf("Arquivo aberto com sucesso!\n\n");
        fscanf(ptr_arq, "%d\n",&NumTuplas);
        PesosEValores =(Tcelula*) malloc(NumTuplas*sizeof(Tcelula));
        //Extraindo valores do arquivo
        while(1){
            fscanf(ptr_arq, "%d %d\n",&PesosEValores[i].Peso,&PesosEValores[i].Valor);
            //printf("%d %d \n",PesosEValores[i].Peso,PesosEValores[i].Valor);
            i++;
            if (feof(ptr_arq))
                break;
        }
    }

    fclose(ptr_arq);

    for (int j=1;j<=NumTuplas;j++){
        //CRITÉRIO DE PARADA/IMPRESSÃO
        if (j==NumTuplas){
            z=0;
        }
        printCombination(PesosEValores,NumTuplas,j,z);
    }
    t_fim = time(NULL);

    tempo = difftime(t_fim, t_ini);

    printf("*****Tempo: %f *****",tempo);
}
