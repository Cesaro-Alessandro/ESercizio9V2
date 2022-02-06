#include <stdio.h>

int main()
{
    int numeroA, numeroB, numeroC, vero;

    do
    {
        printf("Inserire i numeri in ordine strettamente crescente (A<B<C) e maggiori di 0 \n");
        printf("Inserisci A \n");
        scanf("%d", &numeroA);
        printf("Inserisci B \n");
        scanf("%d", &numeroB);
        printf("Inserisci C \n");
        scanf("%d", &numeroC);

        if (numeroA < numeroB < numeroC)
        {
            vero = 1;
        }
        else
        {
            vero = 0;
        }

    }
    while(numeroA < 0 || numeroB < 0 || numeroC < 0 || vero == 0);

    printf("Il valore maggiore è %d \n", numeroC);
    printf("Il valore minimo è %d \n", numeroA);
    
    return 0;
}