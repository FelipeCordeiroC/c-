#include <stdio.h>
#include <math.h>  // Biblioteca para fun��es matem�ticas

int main() {
    // Declara��o de vari�veis
    double numero, quadrado, cubo, raizQuadrada, raizCubica;

    printf("Digite um n�mero positivo e maior que zero: ");
    scanf("%lf", &numero);

    // Verifica se o n�mero � v�lido
    if (numero <= 0) {
        printf("N�mero inv�lido! Por favor, digite um n�mero maior que zero.\n");
        return 1;  // Encerra o programa com c�digo de erro
    }

    // Calcula o quadrado do n�mero
    quadrado = numero * numero;

    // Calcula o cubo do n�mero
    cubo = numero * numero * numero;

    // Calcula a raiz quadrada do n�mero
    raizQuadrada = sqrt(numero);

    // Calcula a raiz c�bica do n�mero
    raizCubica = cbrt(numero);

    // Exibe os resultados
    printf("N�mero digitado: %.2f\n", numero);
    printf("N�mero ao quadrado: %.2f\n", quadrado);
    printf("N�mero ao cubo: %.2f\n", cubo);
    printf("Raiz quadrada do n�mero: %.2f\n", raizQuadrada);
    printf("Raiz c�bica do n�mero: %.2f\n", raizCubica);

    return 0;
}
