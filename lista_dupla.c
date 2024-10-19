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
		printf("***ERRO DE ALOCACAO***");
	}

	printf("Codigo do produto: ");
	scanf_s("%d", &novo->info.codigo);
	printf("Nome do produto: ");
	scanf_s("%s", novo->info.nome, sizeof(novo->info.nome));
	printf("Preco do produto: ");
	scanf_s("%f", &novo->info.preco);

	if (q->nItens == 0) 
	{
		q->first = novo;
		novo->prev = NULL;
		novo->next = NULL;
		q->last = novo;
		q->nItens++;
	}
	else 
	{
		q->last->next = novo;
		novo->prev = q->last;
		q->last = novo;
	}

	q->nItens++;

	printf("Produto inserido com sucesso.\n");

	return q;

}

void imprimir(TpLista* p) {

	if (p->nItens == 0) 
	{
		printf("Lista vazia.");
	}

	TpNodo* atual = p->first;

	while (atual != NULL)
	{
		printf("Codigo: %d\n", atual->info.codigo);
		printf("Nome: %d\n", atual->info.nome);
		printf("Preco: %d\n", atual->info.preco);
		atual = atual->next;
	}
}

/*
TpLista* remover(TpLista* p) {

}
*/


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
			break;
		case 3:
			imprimir(q);
			break;
		}

	} while (decicao != 4);
}
