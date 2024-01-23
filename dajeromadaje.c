#include <stdio.h>
#include <string.h>

int main()
{
    char choice[50];
    printf("Come stai?\n");
    scanf("%[^'\n']s", choice);
    for (int i = 0; i < strlen(choice); i++)
    {
        choice[i] = tolower(choice[i]);
    }
    if (strcmp(choice, "bene") == 0 || strcmp(choice, "benissimo") == 0 || strcmp(choice, "de cristo") == 0)
    {
        printf("Sono contento\n");
    }
    if (strcmp(choice, "nammerda") == 0 || strcmp(choice, "male") == 0)
    {
        printf("Godo scemo\n");
    }
    if (strcmp(choice, "potrebbe andare meglio") == 0)
    {
        printf("Pure peggio cojò!\n");
    }
    return(0);
}