#include <stdio.h>

int main() {
    // Declaração de variáveis
    float base, altura, area;

    // Solicita ao usuário a base do triângulo
    printf("Digite a base do triângulo: ");
    scanf("%f", &base);

    // Solicita ao usuário a altura do triângulo
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);

    // Calcula a área do triângulo
    area = (base * altura) / 2;

    // Exibe o resultado
    printf("A área do triângulo é: %.2f\n", area);

    return 0;
}
