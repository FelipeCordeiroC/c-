#include <stdio.h>

int main() {
    // Declaração de variáveis
    double horasTrabalhadas, salarioMinimo;
    double valorHora, salarioBruto, imposto, salarioReceber;

    // Solicita ao usuário o número de horas trabalhadas
    printf("Digite o número de horas trabalhadas: ");
    scanf("%lf", &horasTrabalhadas);

    // Solicita ao usuário o valor do salário mínimo
    printf("Digite o valor do salário mínimo: R$ ");
    scanf("%lf", &salarioMinimo);

    // Calcula o valor da hora trabalhada (metade do salário mínimo)
    valorHora = salarioMinimo / 2;

    // Calcula o salário bruto
    salarioBruto = horasTrabalhadas * valorHora;

    // Calcula o imposto (3% do salário bruto)
    imposto = salarioBruto * 0.03;

    // Calcula o salário a receber (salário bruto menos o imposto)
    salarioReceber = salarioBruto - imposto;

    // Exibe os resultados
    printf("Valor da hora trabalhada: R$ %.2f\n", valorHora);
    printf("Salário bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto (3%% do salário bruto): R$ %.2f\n", imposto);
    printf("Salário a receber: R$ %.2f\n", salarioReceber);

    return 0;
}
