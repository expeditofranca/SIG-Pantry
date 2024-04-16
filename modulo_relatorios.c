#include <stdio.h>
#include "modulo_telas_iniciais.h"
#include "util.h"

char tela_menu_relatorios(void){
  char op;
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                    - - - - Menu Relatorios - - - -                      ***\n");
  printf("***                                                                         ***\n");
  printf("***         1 - Ver despensa atualizada                                     ***\n");
  printf("***         2 - Gastos mensais atuais                                       ***\n");
  printf("***         3 - Gastos mensais previos                                      ***\n");
  printf("***         4 - Ranking de itens consumidos                                 ***\n");
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

void tela_despensa_atual(void){
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Despensa Atualizada - - - -                    ***\n");
  printf("***                                                                         ***\n");
  printf("***         Aqui serao listados os produtos da despensa                     ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  getchar();
}

void tela_gastos_atuais(void){
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Gastos do mes atual - - - -                    ***\n");
  printf("***                                                                         ***\n");
  printf("***         Aqui serao listados os gastos atuais do mes                     ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  getchar();
}

void tela_gastos_previos(void){
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***               - - - - Gastos dos meses passados - - - -                 ***\n");
  printf("***                                                                         ***\n");
  printf("***         Aqui serao listados os gastos dos meses passados                ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  getchar();
}

void tela_itens_consumidos(void){
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                 - - - - Itens mais consumidos - - - -                   ***\n");
  printf("***                                                                         ***\n");
  printf("***         Aqui sera listado o consumo de todos os itens                   ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  getchar();
}