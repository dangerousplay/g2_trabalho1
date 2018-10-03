//
// Created by aluno on 03/10/18.
//

#include <stdlib.h>
#include "math.h"



unsigned long long factorial(unsigned int number){
        unsigned long long resultado = 1;

        for(unsigned long long i = 1; i <= number; i++){
                resultado *= i;
        }
        return resultado;
}

long double potencia(long double number, int expoente){
        long double resultado = 1;

        if(expoente == 0)
                return 1;

        int size = abs(expoente);

        for(int i = 0; i < size; i++){
                resultado = expoente > 0 ? resultado*number : resultado/number;
        }

        return resultado;
}