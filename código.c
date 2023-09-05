#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

int solicitarCantidad();
void imprimirNPrimos(int cantidad);

void imprimirNPrimos(int cantidad){
    static int primo = 1;
    int flag;

    for (;cantidad > 0; cantidad--){
        do {
            flag = 1;
            primo++;

            for (int i = 2; i * i <= primo; i++){   // En lugar de verificar todos los números hasta [numero], solo necesitamos verificar hasta la raíz cuadrada de [numero]
                if (primo % i == 0)                 // esto reduce significativamente el número de iteraciones, especialmente para números grandes.
                    flag = 0;
            }
        } while (flag == 0);

        printf("\t%i\n", primo);
    }
}