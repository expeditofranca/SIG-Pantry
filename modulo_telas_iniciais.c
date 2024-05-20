#include <stdio.h> // importa fun??es que podem ser ?teis ao projeto

void cabecalho_principal(void){
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***               Universidade Federal do Rio Grande do Norte               ***\n");
  printf("***                   Centro de Ensino Superior do Serido                   ***\n");
  printf("***                 Departamento de Computacao e Tecnologia                 ***\n");
  printf("***                    Disciplina DCT1106 -- Programacao                    ***\n");
  printf("***             Projeto Sistema de Gestao de Despensa Domestica             ***\n");
  printf("***            Developed by @expeditofranca -- since March, 2024            ***\n");
  printf("***                                                                         ***\n");
  printf("***                       Bem-vindo ao nosso sistema!                       ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
}

void cabecalho_secundario(void){
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                       - - - - Xtore Phone - - - -                       ***\n");
  printf("***                                                                         ***\n");
  printf("***            Developed by @expeditofranca -- since March, 2024            ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
}

char tela_menu_principal(void){
  char op;
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***         - - - - Sitema de Gestao de Despensa Domestica - - - -          ***\n");
  printf("***                                                                         ***\n");
  printf("***         1 - Modulo Item                                                 ***\n");
  printf("***         2 - Modulo Entrada de Itens                                     ***\n");
  printf("***         3 - Modulo Saida de Itens                                       ***\n");
  printf("***         4 - Modulo Relatorios                                           ***\n");
  printf("***         5 - Sobre o Projeto                                             ***\n");
  printf("***         6 - Sobre a Equipe                                              ***\n");
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

void tela_sobre(void) {
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***         - - - - Sitema de Gestao de Despensa Domestica - - - -          ***\n");
  printf("***                                                                         ***\n");
  printf("***      Projeto desenvolvido para disciplina DCT1106 - Programacao do      ***\n");
  printf("***     Bacharelado em Sistemas de Informacao da UFRN - CERES Caico.        ***\n");
  printf("***      O projeto de cunho academico avaliativo desenvolvido em C tem      ***\n");
  printf("***     como objetivo auxiliar no controle de uma despensa domestica,       ***\n");
  printf("***     informando produtos adquiridos durante o mes, consumidos, vali-     ***\n");
  printf("***     -dade do estoque, gastos mensais etc.                               ***\n");
  printf("***      Ademais, o projeto serve como um meio de consolidar o que foi      ***\n");
  printf("***     aprendido sobre a linguagem C, bem como a capacidade de resolver    ***\n");
  printf("***     problemas e utilizacao de logica de programacao em um contexto      ***\n");
  printf("***     real, assim servindo tambem como uma preparacao para o mercado      ***\n");
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
  printf("***                                                                         ***\n");
  printf("***          - - - - Sitema de Gest?o de Despensa Dom?stica - - - -         ***\n");
  printf("***                                                                         ***\n");
  printf("***                           Desenvolvido por:                             ***\n");
  printf("***                                                                         ***\n");
  printf("***          Expedito Luiz de Fran?a Neto                                   ***\n");
  printf("***          E-mail: francaexpedito11@gmail.com                             ***\n");
  printf("***          Redes Sociais: @expeditofranca (Git)                           ***\n");
  printf("***          Repositorio: https://github.com/expeditofranca/SIG-Pantry      ***\n");
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
  printf("***                            Escolha invalida!                            ***\n");
}

void msg_deu_certo(void){
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                       Acao realizada com sucesso!                       ***\n");
}