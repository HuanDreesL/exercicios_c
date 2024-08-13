#include <stdio.h>
#include <stdlib.h>


typedef struct{

    char nome[50];
    char endereco[100];
    int matricula;

}estudante;


int main(){
    int x,y;

    estudante *p;

    printf("Insira a quantidade de alunos que deseja alocar: ");
    scanf("%d", &x);

    p = (estudante*) malloc (x * sizeof(estudante));

    for(y = 0; y < x; y++){
        printf("Insira o nome do %d aluno: ", y);
        scanf("%s", (p + y) -> nome);
        printf("Insira o endereco do %d aluno: ", y);
        scanf("%s", (p + y) -> endereco);
        printf("Insira a matricula do %d aluno: ", y);
        scanf("%d", &(p + y) -> matricula);
    }

    for(y = 0; y < x; y++){
        printf("Nome do aluno: %s, memoria de endereco %p\n", (p + y) -> nome, (p + y) -> nome);
        printf("Endereco do aluno: %s, memoria de endereco %p\n", (p + y) -> nome, (p + y) -> endereco);
        printf("Matricula: %d, memoria de endereco %p\n", (p + y) -> nome, &(p + y) -> matricula);
    }

    free(p);
}
