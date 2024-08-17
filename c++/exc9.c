#include <stdio.h>

int main() {
    // Declaração de variáveis
    double pes, polegadas, jardas, milhas;

    // Solicita ao usuário a medida em pés
    printf("Digite a medida em pés: ");
    scanf("%lf", &pes);

    // Verifica se o valor digitado é positivo
    if (pes < 0) {
        printf("Por favor, digite um valor positivo.\n");
        return 1;  // Encerra o programa com código de erro
    }

    // Converte pés para polegadas
    polegadas = pes * 12;

    // Converte pés para jardas
    jardas = pes / 3;

    // Converte jardas para milhas
    milhas = jardas / 1760;

    // Exibe os resultados
    printf("Medida em pés: %.2f\n", pes);
    printf("Medida em polegadas: %.2f\n", polegadas);
    printf("Medida em jardas: %.2f\n", jardas);
    printf("Medida em milhas: %.6f\n", milhas);

    return 0;
}
