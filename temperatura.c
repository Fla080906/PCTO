#include <stdio.h>

int main()
{
    float celsius;
    float farenheit;
    float kelvin;
    printf("Inserisci temperatura in celsius\n");
    scanf("%f", &celsius);
    farenheit = 9/5*celsius+32;
    kelvin = celsius+273.15;
    if(celsius < -273.15)
    {
        printf("Errore\n");
    }
    else
    {
        printf("Temperatura in farenheit:%f\n Temperatura in kelvin:%f\n", farenheit, kelvin);
    }
    return(0);
}