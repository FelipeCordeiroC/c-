#include <stdio.h>

int main() {
    // Declara��o de vari�veis
    double pes, polegadas, jardas, milhas;

    // Solicita ao usu�rio a medida em p�s
    printf("Digite a medida em p�s: ");
    scanf("%lf", &pes);

    // Verifica se o valor digitado � positivo
    if (pes < 0) {
        printf("Por favor, digite um valor positivo.\n");
        return 1;  // Encerra o programa com c�digo de erro
    }

    // Converte p�s para polegadas
    polegadas = pes * 12;

    // Converte p�s para jardas
    jardas = pes / 3;

    // Converte jardas para milhas
    milhas = jardas / 1760;

    // Exibe os resultados
    printf("Medida em p�s: %.2f\n", pes);
    printf("Medida em polegadas: %.2f\n", polegadas);
    printf("Medida em jardas: %.2f\n", jardas);
    printf("Medida em milhas: %.6f\n", milhas);

    return 0;
}
