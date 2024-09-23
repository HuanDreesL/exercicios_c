#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 100

typedef struct produto {
	int codigo;
	char nome[TAM];
	float preco;
}TpProduto;

typedef struct nodo {
	TpProduto produto;
	struct nodo* prox;
}TpNodo;

void inserirProduto(TpNodo** r)
{
	TpNodo *novo = (TpNodo*)malloc(sizeof(TpNodo));

	if (novo == NULL)
	{
		printf("***Erro ao alocar memória***");
		return;
	}

	printf("Informe o Codigo do Produto: ");
	scanf_s("%d", & novo->produto.codigo);

	printf("Informe o nome do produto: ");
	getchar();
	fgets(novo->produto.nome, 100, stdin);

	printf("Informe o Preco do Produto: ");
	scanf_s("%f", & novo->produto.preco);

	novo->prox = *r;

	*r = novo;

	printf("Produto Adicionado na Lista\n");
}

void excluirProduto(TpNodo** r)
{
    if (*r == NULL) {
        printf("A lista esta vazia, nao ha produtos para excluir.\n");
        return;
    }

    int codigo;

    printf("Informe o codigo do produto a ser excluido: ");
    scanf_s("%d", &codigo);

    TpNodo *atual = *r;
    TpNodo *anterior = NULL;

    while (atual != NULL && atual->produto.codigo != codigo) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        printf("Produto com o codigo %d nao encontrado.\n", codigo);
        return;
    }

    if (anterior == NULL) {
        *r = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }

    free(atual);
    printf("Produto excluido com sucesso!\n");
}

void imprimirLista(TpNodo* r)
{
	if (r == NULL)
	{
		printf("Sua lista esta vazia!");
		return;
	}

	TpNodo *atual = r;

	while (atual != NULL)
	{
		printf("---Lista de Produtos---\n");
		printf("Codigo: %d\n", atual->produto.codigo);
		printf("Nome: %s\n", atual->produto.nome);
		printf("Preco: %f\n", atual->produto.preco);

		atual = atual->prox;
	}
}

void main() {
	int opc, j;
	TpNodo *r = NULL;

	do {
		printf("\nQUE OPERACAO VOCE QUER REALIZAR COM A LISTA:\n\n1 = INSERIR\n2 = EXCLUIR\n3 = IMPRIMIR\n0 = SAIR\n\nDIGITE: ");
		scanf_s("%d", & opc);

		switch (opc) {
		case 1:
			inserirProduto(&r);
			break;
		case 2:
			excluirProduto(&r);
			break;
		case 3:
			imprimirLista(r);
			break;
		case 0:
			break;
		}
	} while (opc != 0);
	printf("Voce optou por sair do programa\n");
}
