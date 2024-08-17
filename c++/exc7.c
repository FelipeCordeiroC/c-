#include <stdio.h>

int main() {
    // Declaração de variáveis
    float raio, area;

    // Solicita ao usuário o raio do círculo
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    // Calcula a área do círculo
    area = M_PI * raio * raio;

    // Exibe o resultado
    printf("A área do círculo é: %.2f\n", area);

    return 0;
}
