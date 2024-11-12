#include <stdio.h>

int main(){

    int a = 10;
    int *p = &a;

    printf("Valor de p: %p\n", p);
    printf("Endereco de p: %p\n", &p);
    printf("Valor contido no endereço apontado por p: %d\n", *p);
}