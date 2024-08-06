#include <stdio.h>

void swap(int *a, int *b){
    int aux;

    aux = *a; // aux = 10; e a = 10;
    *a = *b; // a = 20; e b = 20;
    *b = aux; // b = 10; aux = 10;

}


int main(){
    int x = 10;
    int y = 20;

    printf("Valor de X = %d\n", x);
    printf("Valor de Y = %d\n", y);

    swap(&x, &y);

    printf("Valor de X = %d\n", x);
    printf("Valor de Y = %d\n", y);

}
