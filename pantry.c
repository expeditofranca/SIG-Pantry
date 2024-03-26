#include <stdio.h> // importa fun��es que podem ser �teis ao projeto
#include "modulo_cabecalhos.h"
#include "modulo_telas_iniciais.h"
#include "modulo_item.h"
#include "modulo_relatorios.h"
#include "modulo_entrada.h"
#include "modulo_saida.h"

int main(void){
    char op = tela_menu_principal();

    while(op != '0'){
      if (op == '1') {
        tela_sobre();
      } else if (op == '2') {
        tela_equipe();
      } else if (op == '3') {
        char op2 = tela_menu_item();

        while(op2 != '0'){
          if (op2 == '1'){
            tela_cadastrar_item();
          } else if (op2 == '2'){
            tela_excluir_item();
          } else if (op2 == '3'){
            tela_pesquisar_item();
          } else if (op2 == '4'){
            tela_atualizar_item();
          } else {
            msg_escolha_invalida();  
          }

          op2 = tela_menu_item();
        }
      } else if (op == '4') {
        char op2 = tela_menu_entrada();

        while(op2 != '0'){
          if (op2 == 1) {
            tela_adicionar_item();
          } else {
            msg_escolha_invalida();
          }

          op2 = tela_menu_entrada();
        }
      } else if (op == '5') {
        char op2 = tela_menu_saida();

        while(op2 != '0'){
          if (op2 == '1') {
            tela_retirar_item();
          } else {
            msg_escolha_invalida();
          }

          op2 = tela_menu_saida();
        }
      } else if (op == '6') {
        char op2 = tela_menu_relatorios();

        while(op2 != '0'){
          if (op2 == '1') {
            tela_despensa_atual();
          } else if (op2 == '2') {
            tela_gastos_atuais();
          } else if (op2 == '3') {
            tela_gastos_previos();
          } else if (op2 == '4') {
            tela_itens_consumidos();
          } else {
            msg_escolha_invalida();
          }

          op2 = tela_menu_relatorios();
        }
      } else {
        msg_escolha_invalida();  
      }
      op = tela_menu_principal();
    }
    return 0;
}