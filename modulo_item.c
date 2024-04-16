#include <stdio.h> // importa funções que podem ser úteis ao projeto
#include "modulo_telas_iniciais.h"
#include "util.h"

char tela_menu_item(void){
  char op;
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                       - - - - Menu Item - - - -                         ***\n");
  printf("***                                                                         ***\n");
  printf("***         1 - Cadastrar item                                              ***\n");
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
  return op;
}

void tela_cadastrar_item(void){
  char cod_barras[13];
  char nome[20];
  char preco[7];
  char marca[17];
  char validade[9];
  char avaliacao[2];

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                    - - - - Cadastrar Item - - - -                       ***\n");
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

  printf("Nome do item: ");
  scanf("%s", nome);
  getchar();
  while(!validaNome(nome)){
    printf("Nome invalido! Digite novamente!");
    scanf("%s", nome);
    getchar();
  }

  printf("Valor do item: ");
  scanf("%s", preco);
  getchar();
  while(!validaPreco(preco)){
    printf("Preco invalido! Digite novamente!");
    scanf("%s", preco);
    getchar();
  }

  printf("Marca do item: ");
  scanf("%s", marca);
  getchar();

  printf("Validade do item: ");
  scanf("%s", validade);
  getchar();

  printf("Avaliacao do item (0 a 5): ");
  scanf("%s", avaliacao);
  getchar();
}

void tela_pesquisar_item(void){
  char cod_barras[13];

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                    - - - - Pesquisar Item - - - -                       ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("Cod. barras do item: ");
  while(!ehNum(cod_barras)){
    printf("Codigo de barras invalido! Digite novamente!");
    scanf("%s", cod_barras);
    getchar();
  }
}

void tela_atualizar_item(void){
  char cod_barras[13];

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                    - - - - Atualizar Item - - - -                       ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("Cod. barras do item: ");
  while(!ehNum(cod_barras)){
    printf("Codigo de barras invalido! Digite novamente!");
    scanf("%s", cod_barras);
    getchar();
  }
}

void tela_excluir_item(void){
  char cod_barras[13];

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                     - - - - Excluir Item - - - -                        ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("Cod. barras do item: ");
  while(!ehNum(cod_barras)){
    printf("Codigo de barras invalido! Digite novamente!");
    scanf("%s", cod_barras);
    getchar();
  }
}