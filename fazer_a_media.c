int main(void){
    setlocale(LC_ALL, "Portuguese");

    float nota1;
    float nota2;
    float nota3;
    float media;

    printf("Digite a 1° Nota: ");
    scanf("%f", &nota1);

    printf("Digite a 2° Nota: ");
    scanf("%f", &nota2);

    printf("Digite a 3° Nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A sua media é %f", media);
}
