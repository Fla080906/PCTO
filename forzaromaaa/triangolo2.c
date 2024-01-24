#include <stdio.h>

int main()
{
    float altezza;
    float base;
    float lato;
    float secondolato;
    printf("Inserisci altezza\n");
    scanf("%f", &altezza);
    printf("Inserisci base\n");
    scanf("%f", &base);
    printf("Inserisci lato\n");
    scanf("%f", &lato);
    printf("Insersci secondo lato\n");
    scanf("%f", &secondolato);
    printf("Area: %f\nPerimetro: %f\n", (base*altezza)/2, (base+lato+secondolato));
}