char tela_menu_saida(void);
void tela_retirar_item(void);

typedef struct saida Saida;

struct saida {
    char cod_barras[13];
    char qntd[4];
};