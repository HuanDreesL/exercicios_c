#include <stdio.h>
#include <math.h>
#include <locale.h>

void main(){
    char nome[15];
    char endereco[100];
    char telefone[10];

    printf("Digite seu Nome: ");
    fgets(nome,15,stdin);

    printf("Digite seu Endereco: ");
    fgets(endereco,100,stdin);

    printf("Digite seu telefone: ");
    fgets(telefone,10,stdin);

    printf("DADOS\nNome: %s\nEndereco: %s\nTelefone: %s", nome,endereco,telefone);
}
