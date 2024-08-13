#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p; // cria ponteiro para um inteiro
    p = (int*)malloc(sizeof(int)); // aloca memoria
    if(p){ // testa se a memoria foi alocada
        printf("Memoria alocada com sucesso\n");
    }else{
        printf("Nao foi possivel alocar memoria");
        return 0; // finaliza o programa
    }

    *p = 10; // atribui o valor na memoria alocada
    printf("Valor: %d\n", *p); // imprime o valor da memoria alocada
    free(p); // libera a memoria
}
