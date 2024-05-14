char tela_menu_entrada(void);
void tela_adicionar_item(void);

typedef struct entrada Entrada;

struct entrada {
    char cod_barras[13];
    char qntd[4];
};
