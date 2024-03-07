#include<stdio.h> // importa funções que podem ser úteis ao projeto
#include"cabecalhos.h"

int tela_menu_principal(void){
  int op;
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***         - - - - Sitema de Gestão de Despensa Doméstica - - - -          ***\n");
  printf("***                                                                         ***\n");
  printf("***         1 - Sobre o Projeto                                             ***\n");
  printf("***         2 - Sobre a Equipe                                              ***\n");
  printf("***         0 - Sair                                                        ***\n");
  printf("***                                                                         ***\n");
  printf("***         Escolha a opção desejada...                                     ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  scanf("%d", &op);
  getchar();
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return op;
}

void tela_sobre(void) {
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***         - - - - Sitema de Gestão de Despensa Doméstica - - - -          ***\n");
  printf("***                                                                         ***\n");
  printf("***      Projeto desenvolvido para disciplina DCT1106 - Programação do      ***\n");
  printf("***     Bacharelado em Sistemas de Informação da UFRN - CERES Caicó.        ***\n");
  printf("***      O projeto de cunho acadêmico avaliativo desenvolvido em C tem      ***\n");
  printf("***     como objetivo auxiliar no controle de uma despensa doméstica,       ***\n");
  printf("***     produtos adquiridos durante o mês, consumidos, validade do esto-    ***\n");
  printf("***     -que, gastos mensais etc.                                           ***\n");
  printf("***      Ademais, o projeto serve como um meio de consolidar o que foi      ***\n");
  printf("***     aprendido sobre a linguagem C, bem como a capacidade de resolver    ***\n");
  printf("***     problemas e utilização de lógica de programação em um contexto      ***\n");
  printf("***     real, assim servindo também como uma preparação para o mercado      ***\n");
  printf("***     de trabalho.                                                        ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_equipe(void) {
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***          - - - - Sitema de Gestão de Despensa Doméstica - - - -         ***\n");
  printf("***                                                                         ***\n");
  printf("***                           Desenvolvido por:                             ***\n");
  printf("***                                                                         ***\n");
  printf("***          Expedito Luiz de França Neto                                   ***\n");
  printf("***          E-mail: francaexpedito11@gmail.com                             ***\n");
  printf("***          Redes Sociais: @expeditofranca (Git)                           ***\n");
  printf("***          Repositório: https://github.com/expeditofranca/SIG-Pantry      ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void msg_escolha_invalida(void){
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                            Escolha inválida!                            ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
}