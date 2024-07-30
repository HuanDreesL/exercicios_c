#include <stdio.h>
#include <math.h>
#include <locale.h>

void main(){
    char produto[30];

    printf("Informe o nome do Produto: ");
    fgets(produto,30,stdin);

    printf("O Produto eh: %s", produto);
}
