#include <stdio.h>

int main() {
    int idade = 20;
    double altura = 1.90;
    char Validade = 'S';
    char nome[15] = "sergio";

    printf("A idade é: %d e o nome é: %s\n", idade, nome);
    printf("É alto? %c. Quanto de altura? %.2f\n", Validade, altura);

    return 0;
}