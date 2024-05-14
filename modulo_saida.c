#include <stdio.h>
#include <stdlib.h>
#include "modulo_telas_iniciais.h"
#include "util.h"
#include "modulo_saida.h"

char tela_menu_saida(void){
  char op;
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                - - - - Menu de Saida de Itens - - - -                 ***\n");
  printf("***                                                                         ***\n");
  printf("***         1 - Retirar item(ns) da despensa                             ***\n");
  printf("***         0 - Sair                                                        ***\n");
  printf("***                                                                         ***\n");
  printf("***         Escolha a opcao desejada...                                     ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  scanf("%c", &op);
  getchar();
  return op;
};

void tela_retirar_item(void){
  Saida *saida;
  saida = (Saida*) malloc(sizeof(Saida));
  FILE *fp;
  fp = fopen("saidas.txt", "ab");
  
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                    - - - - Retirar Item - - - -                       ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("Cod. barras do item: ");
  scanf("%s", saida->cod_barras);
  getchar();
  while(!ehNum(saida->cod_barras)){
    printf("Codigo de barras invalido! Digite novamente!\n");
    scanf("%s", saida->cod_barras);
    getchar();
  }

  printf("Quantidade de unidades do item: ");
  scanf("%s", saida->qntd);
  getchar();
  while(!ehNum(saida->qntd)){
    printf("Quantidade invalida! Digite novamente!\n");
    scanf("%s", saida->qntd);
    getchar();
  }

  fwrite(saida, sizeof(saida), 1, fp);
  fclose(fp);
  free(saida);

  msg_deu_certo();
}