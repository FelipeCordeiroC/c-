#include <stdio.h>

int main() {
    // Declara��o de vari�veis
    float base, altura, area;

    // Solicita ao usu�rio a base do tri�ngulo
    printf("Digite a base do tri�ngulo: ");
    scanf("%f", &base);

    // Solicita ao usu�rio a altura do tri�ngulo
    printf("Digite a altura do tri�ngulo: ");
    scanf("%f", &altura);

    // Calcula a �rea do tri�ngulo
    area = (base * altura) / 2;

    // Exibe o resultado
    printf("A �rea do tri�ngulo �: %.2f\n", area);

    return 0;
}
