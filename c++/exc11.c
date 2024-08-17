#include <stdio.h>

int main() {
    // Declara��o de vari�veis
    double horasTrabalhadas, salarioMinimo;
    double valorHora, salarioBruto, imposto, salarioReceber;

    // Solicita ao usu�rio o n�mero de horas trabalhadas
    printf("Digite o n�mero de horas trabalhadas: ");
    scanf("%lf", &horasTrabalhadas);

    // Solicita ao usu�rio o valor do sal�rio m�nimo
    printf("Digite o valor do sal�rio m�nimo: R$ ");
    scanf("%lf", &salarioMinimo);

    // Calcula o valor da hora trabalhada (metade do sal�rio m�nimo)
    valorHora = salarioMinimo / 2;

    // Calcula o sal�rio bruto
    salarioBruto = horasTrabalhadas * valorHora;

    // Calcula o imposto (3% do sal�rio bruto)
    imposto = salarioBruto * 0.03;

    // Calcula o sal�rio a receber (sal�rio bruto menos o imposto)
    salarioReceber = salarioBruto - imposto;

    // Exibe os resultados
    printf("Valor da hora trabalhada: R$ %.2f\n", valorHora);
    printf("Sal�rio bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto (3%% do sal�rio bruto): R$ %.2f\n", imposto);
    printf("Sal�rio a receber: R$ %.2f\n", salarioReceber);

    return 0;
}
