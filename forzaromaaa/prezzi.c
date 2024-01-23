#include <stdio.h>

int main()
{
    
    float numeroOrdini;
    float prezzo = 5;
    float x;
    int i=0;
    printf("\nInserisci numero ordini\n");
    scanf(" %f", &numeroOrdini);
    while (numeroOrdini> 0)
    {
        x = numeroOrdini*prezzo;

        if(numeroOrdini > 50)
        { 
            printf("%f", x-x*15/100);
        }
        else if(numeroOrdini > 30)
        {
            printf("%f", x-x*10/100);
        }
        else 
        {
            printf("%f\n", x);
        }
        printf("\nInserisci numero ordini\n");
        scanf(" %f", &numeroOrdini);
    }
    return (0);
}