#include <stdio.h>
#include "TADcomplex.h"
#include "TADcomplex.c"


int main() {
    Complexo a;
    Complexo b;

    scanf("%lf %lf", &a.real, &a.imag);
    scanf("%lf %lf", &b.real, &b.imag);
    
    Complexo resultado = adicionar(a, b);
    printf("Adição: ");
    imprimirComplexo(resultado);

    resultado = subtrair(a, b);
    printf("Subtração: ");
    imprimirComplexo(resultado);

    resultado = multiplicar(a, b);
    printf("Multiplicação: ");
    imprimirComplexo(resultado);

    resultado = dividir(a, b);
    printf("Divisão: ");
    imprimirComplexo(resultado);

    resultado = conjugado(a);
    printf("Conjugado: ");
    imprimirComplexo(resultado);

    return 0;
}