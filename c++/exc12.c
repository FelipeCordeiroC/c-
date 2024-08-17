#include <stdio.h>

int main() {
    // Declaração de variáveis
    double pesoSacoQuilos, racaoPorGatoGramas;
    double pesoSacoGramas, racaoDiariaTotal, racaoTotalCincoDias, racaoRestante;

    
    printf("Digite o peso do saco de ração (em quilos): ");
    scanf("%lf", &pesoSacoQuilos);

    
    printf("Digite a quantidade de ração fornecida para cada gato (em gramas): ");
    scanf("%lf", &racaoPorGatoGramas);

    
    pesoSacoGramas = pesoSacoQuilos * 1000;

    
    racaoDiariaTotal = racaoPorGatoGramas * 2;

    
    racaoTotalCincoDias = racaoDiariaTotal * 5;

    
    racaoRestante = pesoSacoGramas - racaoTotalCincoDias;

    
    printf("Quantidade de ração restante após cinco dias: %.2f gramas\n", racaoRestante);

    return 0;
}
