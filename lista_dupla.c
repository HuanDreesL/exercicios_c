// lista_dupla_exercicio.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct _produto {
	int codigo;
	char nome[20];
	float preco;
} TpProduto;
typedef struct _nodo {
	TpProduto info;
	struct _nodo* next;
	struct _nodo* prev;
} TpNodo;
typedef struct _lista {
	int nItens;
	struct _nodo* first;
	struct _nodo* last;
} TpLista;

TpLista* inicializalista() {
	TpLista* novo = (TpLista*)malloc(sizeof(TpLista));
	novo->nItens = 0;
	novo->first = NULL;
	novo->last = NULL;
	return novo;
}

TpLista* inserir(TpLista* q) {

	TpNodo* novo = (TpNodo*)malloc(sizeof(TpNodo));

	if (novo == NULL) 
	{
		printf("\n***ERRO DE ALOCACAO***");
	}

	printf("Codigo do produto: ");
	scanf_s("%d", &novo->info.codigo);
	printf("Nome do produto: ");
	scanf_s("%s", novo->info.nome, sizeof(novo->info.nome));
	printf("Preco do produto: ");
	scanf_s("%f", &novo->info.preco);
	novo->next = NULL;
	novo->prev = q->last;

	if (q->nItens == 0) {
		q->first = novo;
	}
	else {
		q->last->next = novo;
	}

	q->last = novo;
	q->nItens++;

	printf("\nProduto inserido com sucesso.\n");

	return q;

}

void imprimir(TpLista* p) {

	if (p->nItens == 0) 
	{
		printf("Lista vazia.\n");
		return;
	}

	TpNodo* atual = p->first;

	while (atual != NULL)
	{
		printf("Codigo: %d\n", atual->info.codigo);
		printf("Nome: %s\n", atual->info.nome);
		printf("Preco: %f\n", atual->info.preco);
		atual = atual->next;
	}
}


TpLista* remover(TpLista* p) {

	int codigo;
	
	if (p->nItens == 0) 
	{
		printf("Nenhum item na lista.\n");
		return p;
	}

	printf("Digite o codigo do produto: ");
	scanf_s("%d", &codigo);

	TpNodo* atual = p->first;

	while (atual != NULL && atual->info.codigo != codigo) 
	{
		atual = atual->next;
	}

	if (atual == NULL) 
	{
		printf("Produto nao encontrado.\n");
		return p;
	}

	if (atual == p->first) {
		p->first = atual->next;
		if (p->first != NULL) {
			p->first->prev = NULL;
		}
		else {
			p->last = NULL;
		}
	}

	else if (atual == p->last) {
		p->last = atual->prev;
		if (p->last != NULL) {
			p->last->next = NULL;
		}
	}

	else {
		atual->prev->next = atual->next;
		atual->next->prev = atual->prev;
	}

	free(atual);
	p->nItens--;

	printf("Produto removido com sucesso.\n");

	return p;
}



int main() {
	TpLista* q;
	q = inicializalista();
	int decicao = 0;

	do 
	{
		printf("(1) - Inserir um produto na lista.\n");
		printf("(2) - Excluir um produto da lista.\n");
		printf("(3) - Imprimir no display a lista.\n");
		printf("(4) - Finalizar programa.\n");

		printf("\nInsira uma opcao para iniciar: ");
		scanf_s("%d", &decicao);

		switch (decicao)
		{
		case 1:
			inserir(q);
			break;
		case 2:
			remover(q);
			break;
		case 3:
			imprimir(q);
			break;
		}

	} while (decicao != 4);
}
