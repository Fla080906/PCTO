#include <stdio.h>

int main()
{
    int lato1;
    int lato2;
    int lato3;
    printf("Inserisci prima lunghezza\n");
    scanf("%d", &lato1);
    printf("Inserisci seconda lunghezza\n");
    scanf("%d", &lato2);
    printf("Inserisci terza lunghezza\n");
    scanf("%d", &lato3);
    if((lato1+lato2>lato3) && (lato2+lato3>lato1) && (lato3+lato1>lato2))
    {
        printf("Possono costituire un triangolo\n");
    }
     else if((lato1+lato2<lato3) || (lato2+lato3<lato1) || (lato3+lato1<lato2))
    {
        printf("Non possono costituire un triangolo\n");
    }
    return(0);
}