#include <stdio.h>

int main() {
    // Declara��o de vari�veis
    double precoFabrica, percentualLucro, percentualImpostos;
    double valorLucro, valorImpostos, precoFinal;

    // Solicita ao usu�rio o pre�o de f�brica do ve�culo
    printf("Digite o pre�o de f�brica do ve�culo: R$ ");
    scanf("%lf", &precoFabrica);

    // Solicita ao usu�rio o percentual de lucro do distribuidor
    printf("Digite o percentual de lucro do distribuidor (em %%): ");
    scanf("%lf", &percentualLucro);

    // Solicita ao usu�rio o percentual de impostos
    printf("Digite o percentual de impostos (em %%): ");
    scanf("%lf", &percentualImpostos);

    // Calcula o valor correspondente ao lucro do distribuidor
    valorLucro = (percentualLucro / 100) * precoFabrica;

    // Calcula o valor correspondente aos impostos
    valorImpostos = (percentualImpostos / 100) * precoFabrica;

    // Calcula o pre�o final do ve�culo
    precoFinal = precoFabrica + valorLucro + valorImpostos;

    // Exibe os resultados
    printf("Valor do lucro do distribuidor: R$ %.2f\n", valorLucro);
    printf("Valor dos impostos: R$ %.2f\n", valorImpostos);
    printf("Pre�o final do ve�culo: R$ %.2f\n", precoFinal);

    return 0;
}
