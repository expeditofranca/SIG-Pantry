#include <stdio.h> // importa funções que podem ser úteis ao projeto
#include "modulo_cabecalhos.h"
#include "modulo_telas_iniciais.h"

char tela_menu_item(void){
  char op;
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                       - - - - Menu Item - - - -                         ***\n");
  printf("***                                                                         ***\n");
  printf("***         1 - Adicionar item                                              ***\n");
  printf("***         2 - Excluir item                                                ***\n");
  printf("***         3 - Pesquisar item                                              ***\n");
  printf("***         4 - Atualizar item                                              ***\n");
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

void tela_cadastrar_item(void){
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                    - - - - Adicionar Item - - - -                       ***\n");
  printf("***                                                                         ***\n");
  printf("***         Cod. barras do item:                                            ***\n");
  printf("***         Nome do item:                                                   ***\n");
  printf("***         Valor do item:                                                  ***\n");
  printf("***         Marca do item:                                                  ***\n");
  printf("***         Validade do item:                                               ***\n");
  printf("***         Avaliação do item: (0 a 5)                                      ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  getchar();
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_pesquisar_item(void){
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                    - - - - Pesquisar Item - - - -                       ***\n");
  printf("***                                                                         ***\n");
  printf("***         Cod. barras do item:                                            ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  getchar();
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_atualizar_item(void){
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                    - - - - Atualizar Item - - - -                       ***\n");
  printf("***                                                                         ***\n");
  printf("***         Cod. barras do item:                                            ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  getchar();
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_excluir_item(void){
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                     - - - - Retirar Item - - - -                        ***\n");
  printf("***                                                                         ***\n");
  printf("***         Cod. barras do item:                                            ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  getchar();
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}