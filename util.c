#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Códigos retirados e/ou inspirados em https://github.com/flgorgonio/linguasolta/blob/main/util.c

//Verifica se o caractere é um número
int ehNum(char* num){
    int a = 0;
    int i;

    for(i = 0; num[i] != '\0'; i++){
        if (num[i] >= '0' && num[i] <= '9') {
            a++;
        }
    }

    if(a == strlen(num)){
        return 1;
    } else {
        return 0;
    }
}

//Verifica se o caractere é uma letra
int ehLetra(char a){
    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) {
        return 1;
    } else {
        return 0;
    }
}

//Verifica se o parâmetro é um preço válido
int validaPreco(char* preco){
    int i;
    for(i = 0; preco[i] != '\0'; i++){
        if((ehLetra(preco[i]))){
            return 0;
        }
    }
    return 1;
}

//Verifica se o parâmetro é um nome válido
int validaNome(char* nome){
    int i;
    for(i = 0; nome[i] != '\0'; i++){
        if (!ehLetra(nome[i]) && nome[i] != ' ') {
            return 0;
        }
    }
    return 1;
}