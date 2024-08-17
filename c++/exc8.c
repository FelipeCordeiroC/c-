#include <stdio.h>
#include <math.h>  // Biblioteca para funções matemáticas

int main() {
    // Declaração de variáveis
    double numero, quadrado, cubo, raizQuadrada, raizCubica;

    printf("Digite um número positivo e maior que zero: ");
    scanf("%lf", &numero);

    // Verifica se o número é válido
    if (numero <= 0) {
        printf("Número inválido! Por favor, digite um número maior que zero.\n");
        return 1;  // Encerra o programa com código de erro
    }

    // Calcula o quadrado do número
    quadrado = numero * numero;

    // Calcula o cubo do número
    cubo = numero * numero * numero;

    // Calcula a raiz quadrada do número
    raizQuadrada = sqrt(numero);

    // Calcula a raiz cúbica do número
    raizCubica = cbrt(numero);

    // Exibe os resultados
    printf("Número digitado: %.2f\n", numero);
    printf("Número ao quadrado: %.2f\n", quadrado);
    printf("Número ao cubo: %.2f\n", cubo);
    printf("Raiz quadrada do número: %.2f\n", raizQuadrada);
    printf("Raiz cúbica do número: %.2f\n", raizCubica);

    return 0;
}
