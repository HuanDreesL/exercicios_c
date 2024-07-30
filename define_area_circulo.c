#include <stdio.h>
#include <math.h>
#include <locale.h>
#define PI 3.14;

int main(void){
    float raio;
    float area;


    printf("Digite o valor do raio");
    scanf("%f", &raio);

    area = (raio * raio) * PI;

    printf("A area do circulo eh %f", area);
}
