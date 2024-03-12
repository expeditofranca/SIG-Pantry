#include<stdio.h> // importa funções que podem ser úteis ao projeto
#include"cabecalhos.h"
#include"telas_iniciais.h"

int main(void){
    int op = tela_menu_principal();

    while(op != '0'){
      if (op == '1') {
        tela_sobre();
      } else if (op == '2') {
        tela_equipe();
      } else if (op == '3') {
        tela_equipe();
      } else if (op == '4') {
        tela_equipe();
      } else {
        msg_escolha_invalida();  
      }
      op = tela_menu_principal();
    }
    return 0;
}