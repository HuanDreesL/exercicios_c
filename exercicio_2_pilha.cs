
#include<stdio.h>
#include<stdlib.h>;
#define MAX 5

typedef struct _pilha{//cria��o de uma struct tipo pilha
	int info[MAX];
	int topo;
}tp_pilha;

void push(tp_pilha *p, int x){//funcao que acrescenta elementos a pilha
    if(p->topo == MAX - 1){
        printf("Pilha esta cheia!");
    }else{
        p->topo++;
        p->info[p->topo] = x;
        printf("O valor %d foi inserido na pilha!", x);
    }
}
void pop(tp_pilha *p){//funcao que extrai elementos da pilha
    if(p->topo == -1){
        printf("Pilha ja esta vazia!");
    }else{
        printf("O valor %d foi retirado da pilha!", p->info[p->topo]);
        p->topo--;
    }
}
void display(tp_pilha *p){//funcao que mostra pilha
    if(p->topo == -1){
        printf("Pilha ja esta vazia");
    }else{
        printf("Valores na pilha: ");
        for(int i = p->topo; i >= 0; i--){
            printf("%d",p->info[i]);
        }

    }
}
int main(){
	tp_pilha *p;
	int y,x;
	p=(tp_pilha*)malloc(sizeof(tp_pilha));
	p->topo=-1;
    do{
        printf("\nO que vc quer fazer com a pilha: Digite:\n\n 1=Inserir(push)\n 2=Retirar(pop)\n 3=Mostrar(display)\n 0=Sair\n\n");
        scanf("%d",&y);
        if(y==1){
            printf("Insira o valor para insirir na pilha: ");
            scanf("%d", &x);
            push(p, x);
        }else if(y==2){
            pop(p);
        }else if(y==3){
            display(p);
        }else if(y==0){
            break;
        }else{
            printf("Esta opcao e invalida!\n");
        }
    }while(y!=0);
     printf("\nVoce optou por sair do programa, as operacoes foram finalizadas\n");
}
