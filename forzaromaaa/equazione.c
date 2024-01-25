#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float c;
    
    printf("Inserisci un valore per a\n");
    scanf("%f", &a);
    printf("Inserisci valore per b\n");
    scanf("%f", &b);
    printf("Inserisci valore per c\n");
    scanf("%f", &c);

    float delta=((b*b)-4*(a*c));

    if(delta<0)
    {                     
        printf("Non esistono soluzioni reali\n");
        return(0);
    }
    else if(delta>0)
    {
        printf("L'equazione ammette due soluzioni distinte\n");
		printf("Soluzione 1: %f\n", (-b + (sqrt(delta)) / (2 * a)));
		printf("Soluzione 2: %f\n", (-b - (sqrt(delta)) / (2 * a)));
    }
    else if(delta == 0)
    {
        printf("L'equazione ammette due soluzioni uguali\n");
		printf("Soluzione: %f\n", -b / (2 * a));
    }
    return(0);
}