#include <stdio.h>
#include "modulo_cabecalhos.h"

char tela_menu_saida(void){
  char op;
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                - - - - Menu de Saida de Itens - - - -                 ***\n");
  printf("***                                                                         ***\n");
  printf("***         1 - Retirar produto(s) da despensa                             ***\n");
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

void tela_retirar_item(void){
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                    - - - - Retirar Item - - - -                       ***\n");
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