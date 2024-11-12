#include <stdio.h>

typedef struct {
    double real;
    double imag;
} Complexo;

Complexo criaComplexo(double real, double imag) {
    Complexo c;
    c.real = real;
    c.imag = imag;
    return c;
}

// Função para adicionar dois números complexos
Complexo adicionaComplexo(Complexo a, Complexo b) {
    Complexo resultado;
    resultado.real = a.real + b.real;
    resultado.imag = a.imag + b.imag;
    return resultado;
}

// Função para subtrair dois números complexos
Complexo subtraiComplexo(Complexo a, Complexo b) {
    Complexo resultado;
    resultado.real = a.real - b.real;
    resultado.imag = a.imag - b.imag;
    return resultado;
}

// Função para multiplicar dois números complexos
Complexo multiplicaComplexo(Complexo a, Complexo b) {
    Complexo resultado;
    resultado.real = a.real * b.real - a.imag * b.imag;
    resultado.imag = a.real * b.imag + a.imag * b.real;
    return resultado;
}

// Função para dividir dois números complexos
Complexo divideComplexo(Complexo a, Complexo b) {
    Complexo resultado;
    double denom = b.real * b.real + b.imag * b.imag;
    resultado.real = (a.real * b.real + a.imag * b.imag) / denom;
    resultado.imag = (a.imag * b.real - a.real * b.imag) / denom;
    return resultado;
}

// Função para imprimir um número complexo
void imprimeComplexo(Complexo c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main() {
    Complexo c1 = criaComplexo(3.0, 4.0);
    Complexo c2 = criaComplexo(1.0, 2.0);

    Complexo soma = adicionaComplexo(c1, c2);
    Complexo diferenca = subtraiComplexo(c1, c2);
    Complexo produto = multiplicaComplexo(c1, c2);
    Complexo quociente = divideComplexo(c1, c2);

    printf("c1: ");
    imprimeComplexo(c1);
    printf("c2: ");
    imprimeComplexo(c2);
    printf("Soma: ");
    imprimeComplexo(soma);
    printf("Diferenca: ");
    imprimeComplexo(diferenca);
    printf("Produto: ");
    imprimeComplexo(produto);
    printf("Quociente: ");
    imprimeComplexo(quociente);

    return 0;
}