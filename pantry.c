#include<stdio.h> // importa fun��es que podem ser �teis ao projeto
#include<locale.h>// configura��o dos caracteres especiais
#include"cabecalhos.h"
#include"telas_iniciais.h"

int main(void){
    setlocale(LC_ALL, "portuguese"); // configura��o dos caracteres especiais
    int op = tela_menu_principal();

    while(op != 0){
      if (op == 1) {
        tela_sobre();
      } else if (op == 2) {
        tela_equipe();
      } else {
        msg_escolha_invalida();  
      }
      op = tela_menu_principal();
    }
    return 0;
}