#include <stdio.h>

int main() {
    // Declara��o de vari�veis
    double pesoSacoQuilos, racaoPorGatoGramas;
    double pesoSacoGramas, racaoDiariaTotal, racaoTotalCincoDias, racaoRestante;

    
    printf("Digite o peso do saco de ra��o (em quilos): ");
    scanf("%lf", &pesoSacoQuilos);

    
    printf("Digite a quantidade de ra��o fornecida para cada gato (em gramas): ");
    scanf("%lf", &racaoPorGatoGramas);

    
    pesoSacoGramas = pesoSacoQuilos * 1000;

    
    racaoDiariaTotal = racaoPorGatoGramas * 2;

    
    racaoTotalCincoDias = racaoDiariaTotal * 5;

    
    racaoRestante = pesoSacoGramas - racaoTotalCincoDias;

    
    printf("Quantidade de ra��o restante ap�s cinco dias: %.2f gramas\n", racaoRestante);

    return 0;
}
