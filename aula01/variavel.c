#include <stdio.h>

float variavelGlobal;
const int constante = 42;
int main() {
    int variavelLocal = 0;
    variavelLocal = constante;
    printf("Valor da constante: %d\n", constante);
    printf("Valor da variavel global: %.2f\n", variavelGlobal);
    printf("Valor da variavel local: %d\n", variavelLocal);
    return 0;
}