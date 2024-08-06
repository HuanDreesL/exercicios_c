#include <stdio.h>

void calcularAreaTriangulo(int lado, float *area, float *perimetro){
    *area = lado * lado;
    *perimetro = 4 * lado;

}


int main(){
    float area;
    float perimetro;

    printf("Area do triangulo %f\n", area);
    printf("Perimetro do triangulo %f\n", perimetro);

    calcularAreaTriangulo(2, &area, &perimetro);

    printf("Area e Perimetro calculados...\n");
    printf("Area do triangulo %.2f\n", area);
    printf("Perimetro do triangulo %.2f\n", perimetro);


}
