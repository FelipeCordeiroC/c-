#include <stdio.h>

int main() {
    // Declaração de variáveis
    double precoFabrica, percentualLucro, percentualImpostos;
    double valorLucro, valorImpostos, precoFinal;

    // Solicita ao usuário o preço de fábrica do veículo
    printf("Digite o preço de fábrica do veículo: R$ ");
    scanf("%lf", &precoFabrica);

    // Solicita ao usuário o percentual de lucro do distribuidor
    printf("Digite o percentual de lucro do distribuidor (em %%): ");
    scanf("%lf", &percentualLucro);

    // Solicita ao usuário o percentual de impostos
    printf("Digite o percentual de impostos (em %%): ");
    scanf("%lf", &percentualImpostos);

    // Calcula o valor correspondente ao lucro do distribuidor
    valorLucro = (percentualLucro / 100) * precoFabrica;

    // Calcula o valor correspondente aos impostos
    valorImpostos = (percentualImpostos / 100) * precoFabrica;

    // Calcula o preço final do veículo
    precoFinal = precoFabrica + valorLucro + valorImpostos;

    // Exibe os resultados
    printf("Valor do lucro do distribuidor: R$ %.2f\n", valorLucro);
    printf("Valor dos impostos: R$ %.2f\n", valorImpostos);
    printf("Preço final do veículo: R$ %.2f\n", precoFinal);

    return 0;
}
