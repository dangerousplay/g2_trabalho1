#include <stdio.h>
#include "math.h"

int main() {

        int operacao;

        printf("Opções: \n1 - Fatorial \n2 - Exponencial\n\n");
        scanf("%d",&operacao);

        if(operacao == 1){
                printf("Digite o fatorial: ");
                unsigned int number = 0;
                scanf("%d", &number);

                printf("Resultado: %llu", factorial(number));
        } else if(operacao == 2){
                long double base;
                int expoente;

                printf("Digite a base e o expoente: \n");
                scanf("%Lf %d", &base, &expoente);

                printf("Resultado: %Lf", potencia(base, expoente));
        }
}