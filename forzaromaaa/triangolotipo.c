#include <stdio.h>

int main()
{
    float lato1;
    float lato2;
    float lato3;
    
    printf("Inserisci prima lunghezza\n");
    scanf("%f", &lato1);
    
    printf("Inserisci seconda lunghezza\n");
    scanf("%f", &lato2);
    
    printf("Inserisci terza lunghezza\n");
    scanf("%f", &lato3);


    
    
    if((lato1+lato2>lato3) && (lato2+lato3>lato1) && (lato3+lato1>lato2))
    {
        printf("Possono costituire un triangolo\n");
    }
     else if((lato1+lato2<=lato3) || (lato2+lato3<=lato1) || (lato3+lato1<=lato2))
    {
        printf("Non possono costituire un triangolo\n");
        return(0);
    }
    
    
    if(lato1 == lato2 && lato2 == lato3)
    {
        printf("Il triangolo è equilatero\n");
    }
    else if(lato1 != lato2 && lato2 != lato3)
    {
        printf("Il triangolo è scaleno\n");
    }
    else
    {
        printf("Il triangolo è isoscele\n");
    }

    return(0);
}
