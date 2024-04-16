#include <stdio.h>
#include "modulo_telas_iniciais.h"
#include "util.h"

char tela_menu_entrada(void){
  char op;
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                - - - - Menu de Entrada de Itens - - - -                 ***\n");
  printf("***                                                                         ***\n");
  printf("***         1 - Adicionar produto(s) a despensa                             ***\n");
  printf("***         0 - Sair                                                        ***\n");
  printf("***                                                                         ***\n");
  printf("***         Escolha a opcao desejada...                                     ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  scanf("%c", &op);
  getchar();
  return op;
}

void tela_adicionar_item(void){
  char cod_barras[13];
  char qntd[4];

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                    - - - - Adicionar Item - - - -                       ***\n");
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
    printf("Quantidade invalida! Digite novamente!\n");
    scanf("%s", qntd);
    getchar();
  }
  
  msg_deu_certo();
}