#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"

int main() {
    float angulo_graus;
    printf("Digite o angulo em graus: ");
    scanf("%f", &angulo_graus);

    // Convertendo o ângulo de graus para radianos
    float angulo_radianos = graus_para_radianos(angulo_graus);

    printf("Seno de %.2f graus: %.2f\n", angulo_graus, calcular_seno(angulo_radianos));
    printf("Cosseno de %.2f graus: %.2f\n", angulo_graus, calcular_cosseno(angulo_radianos));
    printf("Tangente de %.2f graus: %.2f\n", angulo_graus, calcular_tangente(angulo_radianos));

    system("pause");

    return 0;
}
