#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "modulo_telas_iniciais.h"
#include "util.h"
#include "modulo_item.h"

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
  char *cod_barras;
  cod_barras = (char*) malloc(13*sizeof(char));
  Item *item;
  item = (Item*) malloc(sizeof(Item));
  FILE *fp;
  fp = fopen("itens.dat", "ab");

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
  scanf("%s", item->nome);
  getchar();
  while(!validaNome(item->nome)){
    printf("Nome invalido! Digite novamente!");
    scanf("%s", item->nome);
    getchar();
  }

  printf("Valor do item: ");
  scanf("%s", item->preco);
  getchar();
  while(!validaPreco(item->preco)){
    printf("Preco invalido! Digite novamente!\n");
    scanf("%s", item->preco);
    getchar();
  }

  printf("Marca do item: ");
  scanf("%s", item->marca);
  getchar();

  printf("Validade do item: ");
  scanf("%s", item->validade);
  getchar();

  printf("Avaliacao do item (0 a 5): ");
  scanf("%s", item->avaliacao);
  getchar();

  strcpy(item->cod_barras, cod_barras);

  fwrite(item, sizeof(Item), 1, fp);
  fclose(fp);
  free(item);
  free(cod_barras);

  msg_deu_certo();
}

void tela_pesquisar_item(void){
  char *cod_barras;
  cod_barras = (char*) malloc(13*sizeof(char));
  Item *item;
  item = (Item*) malloc(sizeof(Item));
  FILE *fp;
  fp = fopen("itens.dat", "rb");

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                    - - - - Pesquisar Item - - - -                       ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("Cod. barras do item: ");
  scanf("%s", cod_barras);
  getchar();
  while(!ehNum(cod_barras)){
    printf("Codigo de barras invalido! Digite novamente!\n");
    scanf("%s", cod_barras);
    getchar();
  }

  while(fread(item, sizeof(Item), 1, fp)){
    if(strcmp(item->cod_barras, cod_barras) == 1){
      printf("Cod. barras: %s\n", item->cod_barras);
      printf("Nome: %s\n", item->nome);
      printf("Marca: %s\n", item->marca);
      printf("Preco: %s\n", item->preco);
      printf("Validade: %s\n", item->validade);
      printf("Avaliacao: %s\n", item->avaliacao);
    }
  }

  fclose(fp);
  free(item);
  free(cod_barras);

  msg_deu_certo();
}

void tela_atualizar_item(void){
  char *cod_barras;
  cod_barras = (char*) malloc(13*sizeof(char));
  FILE *fp;
  fp = fopen("itens.dat", "rb");
  FILE *f;
  f = fopen("temp.dat", "wb");
  Item *item;
  item = (Item*) malloc(sizeof(Item));

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                    - - - - Atualizar Item - - - -                       ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("Cod. barras do item: ");
  scanf("%s", cod_barras);
  getchar();
  while(!ehNum(cod_barras)){
    printf("Codigo de barras invalido! Digite novamente!\n");
    scanf("%s", cod_barras);
    getchar();
  }

  while(fread(item, sizeof(Item), 1, fp)){
    if(strcmp(item->cod_barras, cod_barras) != 0){
      fwrite(item, sizeof(Item), 1, f);
    } else {
      char op;
      printf("O que deseja alterar? \n1 - Nome\n2 - Preco\n3 - Marca\n4 - Validade\n5 - Avaliacao\n");
      scanf("%s", &op);
      getchar();
      while(!ehNum(&op) || op < '1' || op > '5'){
        printf("Escolha inválida! Digite novamente: ");
        scanf("%s", &op);
        getchar();
      }

      if(op == '1'){
        printf("Digite o novo nome: ");
        scanf("%s", item->nome);
        getchar();
        while(!validaNome(item->nome)){
          printf("Nome inválido! Digite novamente: ");
          scanf("%s", item->nome);
          getchar();
        }
      } else if (op == '2'){
        printf("Digite o novo preco: ");
        scanf("%s", item->preco);
        getchar();
        while(!validaPreco(item->preco)){
          printf("Preco inválido! Digite novamente: ");
          scanf("%s", item->preco);
          getchar();
        }
      } else if (op == '3'){
        printf("Digite a marca: ");
        scanf("%s", item->marca);
        getchar();
      } else if (op == '4'){
        printf("Digite a validade: ");
        scanf("%s", item->validade);
        getchar();
      } else if (op == '5'){
        printf("Digite a avaliacao: ");
        scanf("%s", item->avaliacao);
        getchar();
      }
      fwrite(item, sizeof(Item), 1, f);
    }
  }
  free(item);
  free(cod_barras);
  fclose(f);
  fclose(fp);

  remove("clientes.dat");
  rename("temp.dat", "clientes.dat");

  msg_deu_certo();
}

void tela_excluir_item(void){
  char *cod_barras;
  cod_barras = (char*) malloc(13*sizeof(char));
  FILE *fp;
  fp = fopen("itens.dat", "rb");
  FILE *f;
  f = fopen("temp.dat", "wb");
  Item *item;
  item = (Item*) malloc(sizeof(Item));

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                     - - - - Excluir Item - - - -                        ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("Cod. barras do item: ");
  scanf("%s", cod_barras);
  getchar();
  while(!ehNum(cod_barras)){
    printf("Codigo de barras invalido! Digite novamente!\n");
    scanf("%s", cod_barras);
    getchar();
  }

  while(fread(item, sizeof(Item), 1, fp)){
    if(strcmp(item->cod_barras, cod_barras) != 0){
      fwrite(item, sizeof(Item), 1, f);
    }
  }
  fclose(fp);
  fclose(f);
  free(item);
  free(cod_barras);

  remove("itens.dat");
  rename("temp.dat", "itens.dat");

  msg_deu_certo();
}