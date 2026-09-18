#include <stddef.h>
#include <stdio.h>
#include <math.h>

//  do not allocate memory for return value
//  assign values to supplied result[] array
//  then return the number of pairs


size_t digits(unsigned number, unsigned result[256]) {
    unsigned qtd_dig = (number == 0) ? 1 : (int)log10(number) + 1;
    unsigned digitos[qtd_dig];
    unsigned temp = number;
    
    //EXTRAÇÃO  
    for (int i =(int)qtd_dig-1; i >= 0; i--) {
          digitos[i] = temp % 10;
          temp /= 10;
      }
  
    size_t k = 0; // Índice para o array de somas

    // Loops para encontrar todas as combinações de pares
    for (int i = 0; i < qtd_dig; i++) {
        for (int j = i + 1; j < qtd_dig; j++) {
            result[k] = digitos[i] + digitos[j];
            k++;
        }
    }
    

    return k;
}
