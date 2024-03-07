#include<stdio.h> // importa fun��es que podem ser �teis ao projeto
#include"cabecalhos.h"

int tela_menu_principal(void){
  int op;
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***         - - - - Sitema de Gest�o de Despensa Dom�stica - - - -          ***\n");
  printf("***                                                                         ***\n");
  printf("***         1 - Sobre o Projeto                                             ***\n");
  printf("***         2 - Sobre a Equipe                                              ***\n");
  printf("***         0 - Sair                                                        ***\n");
  printf("***                                                                         ***\n");
  printf("***         Escolha a op��o desejada...                                     ***\n");
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
  printf("***         - - - - Sitema de Gest�o de Despensa Dom�stica - - - -          ***\n");
  printf("***                                                                         ***\n");
  printf("***      Projeto desenvolvido para disciplina DCT1106 - Programa��o do      ***\n");
  printf("***     Bacharelado em Sistemas de Informa��o da UFRN - CERES Caic�.        ***\n");
  printf("***      O projeto de cunho acad�mico avaliativo desenvolvido em C tem      ***\n");
  printf("***     como objetivo auxiliar no controle de uma despensa dom�stica,       ***\n");
  printf("***     produtos adquiridos durante o m�s, consumidos, validade do esto-    ***\n");
  printf("***     -que, gastos mensais etc.                                           ***\n");
  printf("***      Ademais, o projeto serve como um meio de consolidar o que foi      ***\n");
  printf("***     aprendido sobre a linguagem C, bem como a capacidade de resolver    ***\n");
  printf("***     problemas e utiliza��o de l�gica de programa��o em um contexto      ***\n");
  printf("***     real, assim servindo tamb�m como uma prepara��o para o mercado      ***\n");
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
  printf("***          - - - - Sitema de Gest�o de Despensa Dom�stica - - - -         ***\n");
  printf("***                                                                         ***\n");
  printf("***                           Desenvolvido por:                             ***\n");
  printf("***                                                                         ***\n");
  printf("***          Expedito Luiz de Fran�a Neto                                   ***\n");
  printf("***          E-mail: francaexpedito11@gmail.com                             ***\n");
  printf("***          Redes Sociais: @expeditofranca (Git)                           ***\n");
  printf("***          Reposit�rio: https://github.com/expeditofranca/SIG-Pantry      ***\n");
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
  printf("***                            Escolha inv�lida!                            ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
}