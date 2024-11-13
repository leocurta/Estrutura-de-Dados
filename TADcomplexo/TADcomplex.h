#ifndef COMPLEXO_H
#define COMPLEXO_H

typedef struct {
    double real;
    double imag;
} Complexo;

Complexo adicionar(Complexo a, Complexo b);
Complexo subtrair(Complexo a, Complexo b);
Complexo multiplicar(Complexo a, Complexo b);
Complexo dividir(Complexo a, Complexo b);
Complexo conjugado(Complexo a);
void imprimirComplexo(Complexo a);

#endif // COMPLEXO_H