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

  char preco[] = "";
  printf("Valor do item: ");
  scanf("%s", preco);
  getchar();
  while(!validaPreco(preco)){
    printf("Preco invalido! Digite novamente!\n");
    scanf("%s", preco);
    getchar();
  }
  item->preco = strtof(preco, NULL);
  printf("%f", item->preco);

  printf("Marca do item: ");
  scanf("%s", item->marca);
  getchar();

  printf("Validade do item: ");
  scanf("%s", item->validade);
  getchar();

  char avaliacao[] = {};
  printf("Avaliacao do item (0 a 5): ");
  scanf("%s", avaliacao);
  getchar();
  while(!ehNum(avaliacao)){
    printf("Informacao invalida! Digite novamente!");
    scanf("%s", avaliacao);
    getchar();
  }
  item->avaliacao = atoi(avaliacao);

  strcpy(item->cod_barras, cod_barras);
  item->status = 1;

  FILE *fp;
  fp = fopen("itens.dat", "ab");
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

  FILE *fp;
  fp = fopen("itens.dat", "rb");
  
  while(fread(item, sizeof(Item), 1, fp)){
    if(strcmp(item->cod_barras, cod_barras) == 0){
      printf("Cod. barras: %s\n", item->cod_barras);
      printf("Nome: %s\n", item->nome);
      printf("Marca: %s\n", item->marca);
      printf("Preco: %.2f\n", item->preco);
      printf("Validade: %s\n", item->validade);
      printf("Avaliacao: %d\n", item->avaliacao);
      printf("Status: %d\n", item->status);
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
      printf("O que deseja alterar? \n1 - Nome\n2 - Preco\n3 - Marca\n4 - Validade\n5 - Avaliacao\n6 - Status\n");
      scanf("%s", &op);
      getchar();
      while(!ehNum(&op) || op < '1' || op > '6'){
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
        printf("Nome do item alterado com sucesso.");
      } else if (op == '2'){
        char preco;
        printf("Digite o novo preco: ");
        scanf("%s", &preco);
        getchar();
        while(!validaPreco(&preco)){
          printf("Preco inválido! Digite novamente: ");
          scanf("%s", &preco);
          getchar();
        }
        item->preco = strtof(&preco, NULL);
        printf("Preco do item alterado com sucesso.");
      } else if (op == '3'){
        printf("Digite a marca: ");
        scanf("%s", item->marca);
        getchar();
        printf("Marca do item alterada com sucesso.");
      } else if (op == '4'){
        printf("Digite a validade: ");
        scanf("%s", item->validade);
        getchar();
        printf("Validade do item alterada com sucesso.");
      } else if (op == '5'){
        char avaliacao[2];
        printf("Digite a avaliacao: ");
        scanf("%s", avaliacao);
        getchar();
        while(!ehNum(avaliacao)){
          printf("Informacao inválida! Digite novamente!");
          scanf("%s", avaliacao);
          getchar();
        }
        item->avaliacao = atoi(avaliacao);
        printf("Avaliacao do item alterada com sucesso.");
      } else if (op == '6'){
        if(item->status == 1){
          item->status = 0;
        } else {
          item->status = 1;
        }
        printf("Status do item alterado com sucesso.");
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
  char op;
  char *cod_barras;
  cod_barras = (char*) malloc(13*sizeof(char));
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
  printf("1 - Excluir permanentemente\n2 - Desativar o status ON do registro:\n");
  scanf("%s", &op);
  getchar();
  while(!ehNum(&op) || op < '1' || op > '2'){
    printf("Escolha inválida! Digite novamente: ");
    scanf("%s", &op);
    getchar();
  }

  FILE *fp;
  fp = fopen("itens.dat", "rb");
  FILE *f;
  f = fopen("temp.dat", "wb");

  if(op == '1'){
    while(fread(item, sizeof(Item), 1, fp)){
      if(strcmp(item->cod_barras, cod_barras) != 0){
        fwrite(item, sizeof(Item), 1, f);
      }
    }
  } else {
    while(fread(item, sizeof(Item), 1, fp)){
      if(strcmp(item->cod_barras, cod_barras) == 0){
        item->status = '0';
      }
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