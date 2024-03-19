#include <stdio.h> // importa funções que podem ser úteis ao projeto
#include "cabecalhos.h"
#include "telas_iniciais.h"
#include "modulo_item.h"

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
            adicionar_item();
          } else if (op2 == '2'){
            retirar_item();
          } else if (op2 == '3'){
            pesquisar_item();
          } else if (op2 == '4'){
            atualizar_item();
          } else {
            msg_escolha_invalida();  
          }

          op2 = tela_menu_item();
        }
      } else if (op == '4') {
        tela_equipe();
      } else if (op == '5') {
        tela_equipe();
      } else if (op == '6') {
        tela_equipe();
      } else if (op == '7') {
        tela_equipe();
      } else if (op == '8') {
        tela_equipe();
      } else if (op == '9') {
        tela_equipe();
      } else {
        msg_escolha_invalida();  
      }
      op = tela_menu_principal();
    }
    return 0;
}