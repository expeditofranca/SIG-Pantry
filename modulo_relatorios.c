#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "modulo_telas_iniciais.h"
#include "util.h"
#include "modulo_entrada.h"
#include "modulo_saida.h"
#include "modulo_item.h"

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

  Entrada *entrada;
  entrada = (Entrada*) malloc(sizeof(Entrada));
  Item *item;
  item = (Item*) malloc(sizeof(Item));
  FILE *fe;
  fe = fopen("entradas.dat", "rb");
  FILE *fi;
  fi = fopen("itens.dat", "rb");

  while(fread(entrada, sizeof(Entrada), 1, fe)){
    while(fread(item, sizeof(Item), 1, fi)){
      if(strcmp(entrada->cod_barras, item->cod_barras) == 0){
        printf("%s", item->nome);
        printf("%s", item->marca);
        printf("%d", entrada->qntd);
        printf("*******************************************************************************\n");
      }
    }
  }
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

  Saida *saida;
  saida = (Saida*) malloc(sizeof(Saida));
  FILE *fs;
  fs = fopen("saidas.dat", "rb");
  int maior_s = 0;

  while(fread(saida, sizeof(Saida), 1, fs)){
    if(saida->qntd > maior_s){
      maior_s = saida->qntd;
    }
  }
}