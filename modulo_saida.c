#include <stdio.h>
#include "modulo_telas_iniciais.h"
#include "util.h"

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
  return op;
}

void tela_retirar_item(void){
  char cod_barras[13];
  char qntd[4];
  
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                    - - - - Retirar Item - - - -                       ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("Cod. barras do item: ");
  scanf("%s", cod_barras);
  getchar();
  while(!ehNum(cod_barras)){
    printf("Codigo de barras invalido! Digite novamente!");
    scanf("%s", cod_barras);
    getchar();
  }

  printf("Quantidade de unidades do item: ");
  scanf("%s", qntd);
  getchar();
  while(!ehNum(qntd)){
    printf("Quantidade invalida! Digite novamente!");
    scanf("%s", qntd);
    getchar();
  }
}