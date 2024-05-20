char tela_menu_item(void);
void tela_cadastrar_item(void);
void tela_pesquisar_item(void);
void tela_atualizar_item(void);
void tela_excluir_item(void);

typedef struct item Item;

struct item {
    char cod_barras[14];
    char nome[21];
    float preco;
    char marca[17];
    char validade[11];
    int avaliacao;
    int status;
};