#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "modulo_telas_iniciais.h"
#include "util.h"
#include "modulo_entrada.h"

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
  Entrada *entrada;
  entrada = (Entrada*) malloc(sizeof(Entrada));
  FILE *fp;
  fp = fopen("entradas.txt", "ab");

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                    - - - - Adicionar Item - - - -                       ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("Cod. barras do item: ");
  scanf("%s", entrada->cod_barras);
  getchar();
  while(!ehNum(entrada->cod_barras)){
    printf("Codigo de barras invalido! Digite novamente!\n");
    scanf("%s", entrada->cod_barras);
    getchar();
  }

  char qntd;
  printf("Quantidade de unidades do item: ");
  scanf("%s", &qntd);
  getchar();
  while(!ehNum(&qntd)){
    printf("Quantidade invalida! Digite novamente!\n");
    scanf("%s", &qntd);
    getchar();
  }
  entrada->qntd = atoi(&qntd);

  time_t t = time(NULL);
  struct tm tm = *localtime(&t);
  char data[11];
  sprintf(data, "%02d/%02d/%04d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
  strcpy(entrada->data, data);

  fwrite(entrada, sizeof(Entrada), 1, fp);
  fclose(fp);
  free(entrada);
  
  msg_deu_certo();
}