#include<stdio.h>
#include<stdlib.h>


int main(){
    int x,y;
    int *p;

    printf("Digite o numero de posicoes do vetor: ");
    scanf("%d", &x);

    p = (int *) malloc (x * sizeof(int));
    for(y = 0; y < x; y++){
        printf("Digite o conteudo a ser armazenado na posicao %d do vetor\n", y+1);
        scanf("%d", (p + y));
    }

    for(y = 0; y < x; y++){
        printf("O conteudo da posicao %d eh = %d, endereco de memoria %p\n", y + 1, *(p + y), p + y);
    }
    free(p);
}
