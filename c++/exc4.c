#include <stdio.h>

int main() {
    
    float salario_atual, novo_salario;
    const float aumento_percentual = 25.0;

    // Recebe o sal�rio atual do usu�rio
    printf("Digite o sal�rio atual do funcion�rio: ");
    scanf("%f", &salario_atual);

    // Calcula o novo sal�rio com um aumento de 25%
    novo_salario = salario_atual + (salario_atual * aumento_percentual / 100);

    // Exibe o novo sal�rio
    printf("O novo sal�rio ap�s um aumento de %.2f%% �: %.2f\n", aumento_percentual, novo_salario);

    return 0;
}
