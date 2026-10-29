#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int altura;
    do
    {
        altura = get_int("Height: ");
    }
    while (altura < 1 || altura > 8);

    for (int i = 0; i < altura; i++)
    {

    for (int j = 0; j < altura - i - 1; j++)
        {
            printf(" ");
        }

    for (int k = 0; k < i + 1; k++)
         {
            printf("#");
         }
         
         // REFERENTE AO VAO DO MEIO DAS PIRAMIDES
            printf("  ");

    for (int k = 0; k < i + 1; k++)
         {
            printf("#");
         }

            printf("\n");
    }
}
