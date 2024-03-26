#include <stdio.h>
#include "modulo_cabecalhos.h"

char tela_menu_entrada(void){
  char op;
  cabecalho_principal();
  printf("*******************************************************************************\n");
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
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return op;
}

void tela_adicionar_item(void){
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                    - - - - Adicionar Item - - - -                       ***\n");
  printf("***                                                                         ***\n");
  printf("***         Cod. barras do item:                                            ***\n");
  printf("***         Quantidade de unidades do item:                                 ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  getchar();
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}