int main(void){
    setlocale(LC_ALL, "Portuguese");

    int codigo;
    float valor;
    int quantidade;
    double calcular;

    printf("Digite o código da peça: ");
    scanf("%d", &codigo);

    printf("Insira o valor da peça: ");
    scanf("%f", &valor);

    printf("Insira a quantidade: ");
    scanf("%d", &quantidade);

    calcular = quantidade * valor;

    printf("DADOS DA PEÇA\nCódigo: %d\nValor: R$ %f\n", codigo, calcular);
}
