#include <stdio.h>

int main() {
    // Declara��o de vari�veis
    float raio, area;

    // Solicita ao usu�rio o raio do c�rculo
    printf("Digite o raio do c�rculo: ");
    scanf("%f", &raio);

    // Calcula a �rea do c�rculo
    area = M_PI * raio * raio;

    // Exibe o resultado
    printf("A �rea do c�rculo �: %.2f\n", area);

    return 0;
}
